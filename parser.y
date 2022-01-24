%{
#include "global.h"
#include <string.h>
#include <stdbool.h>


extern TableIds * table = NULL;
extern TableStructures * tableStruct = NULL;
extern BufferLLC* champBuffer = NULL;




bool erreurSyntax = false;
extern unsigned int linenbr;
extern bool erreurLexical;
char quad[100][4][25];
int ind;
extern FILE * yyin ;
int yylex(void);
void yyerror (char const *s);

%}

/* definition des types utilises */

/* text c'est pour recuperer les nom des variables et les non terminaux du language */

%union {
    long num;
    char* text;
    char CHARACTER;
    int BOOLEAN;
    Identifiant *varId;
}

/* regles d'associativites: l'ordre de priorite est inverse a celui de lex, last one is plus prioritaire*/

%left TOKEN_ADD TOKEN_SOUSTR TOKEN_OR
%left TOKEN_MULT TOKEN_DIVIS TOKEN_AND
%left TOKEN_NOT


%right TOKEN_MOD
%right PARENTHESE_G PARENTHESE_D

/* liste des expressions i.e. les non terminaux */


%type<text>	DECLARE
%type<text>	LISTE
%type<text>	CHAMP
%type<text>     instruction
%type<text>     affectation
%type<text>     lecture
%type<text>     ecriture
%type<text>     conditionnel
%type<text>     expression
%type<text>     expression_arithmetique
%type<text>     while
%type<text>     for
%type<varId>     variable_name
%type<text>     addition
%type<text>     soustraction
%type<text>     multiplication
%type<text>     division
%type<text>     ExpBool
%type<text>     Comparaison
%type<text>     comparable
%type<text>     modulo


/* liste des tokens i.e. les terminaux */

%token          TOKEN_MULTICOM
%token          TOKEN_COMMENT
%token <text>   TOKEN_CHAR
%token <text>   TOKEN_TEXT
%token <num>    TOKEN_NUMBER
%token <BOOLEAN>   TOKEN_FALSE
%token <BOOLEAN>   TOKEN_TRUE
%token          TOKEN_DECLARE
%token          TOKEN_CONST
%token          TOKEN_START
%token          TOKEN_STOP
%token          TOKEN_STRUCT
%token          TOKEN_READ
%token          TOKEN_WRITE
%token          TOKEN_IF
%token          TOKEN_ELSE
%token          TOKEN_FOR
%token          TOKEN_IN
%token          TOKEN_FROM
%token          TOKEN_WHILE
%token          TOKEN_ASSIGN
%token          NUM
%token          BOOL
%token          CHAR
%token          FININSTR
%token          ACCOLAD_G
%token          ACCOLAD_D
%token          TOKEN_BEGIN
%token          END
%token          PARENTHESE_G
%token          PARENTHESE_D

%token          TOKEN_INF
%token          TOKEN_SUP
%token          TOKEN_INFEGAL
%token          TOKEN_SUPEGAL
%token          TOKEN_EGAL
%token          TOKEN_DIFF
%token          TOKEN_ADD
%token          TOKEN_SOUSTR
%token          TOKEN_MULT
%token          TOKEN_DIVIS
%token          TOKEN_MOD

%token          TOKEN_NOT
%token          TOKEN_AND
%token          TOKEN_OR

%token          TOKEN_COMMA
%token          TOKEN_ACSTRUCT
%token <text>   TOKEN_ID

%token          TOKEN_FININPUT
%token          CROCHET_G
%token          CROCHET_D


%%
/* definition des regles de production  */
program: TOKEN_DECLARE bloc_declaration TOKEN_START bloc_code TOKEN_STOP ;

bloc_code:      instruction bloc_code  | %empty | error bloc_code {printf("erreur syntaxique a la ligne %d",linenbr);erreurSyntax=true;};

bloc_declaration: 
    DECLARE bloc_declaration  | %empty;

instruction:    affectation{
			printf("\tInstruction Affectation\n");

                }
                |
                lecture{
			printf("\tInstruction Lecture\n");

                }
                |
                ecriture{
			printf("\tInstruction ecriture\n");

                }
                |
                conditionnel{
                    printf(" instruction conditionnel\n");
                }
                |
                while{
                    printf("Boucle Tant que\n");
                    
                }
                |
                for{
                    printf("Boucle Pour\n");
                    
                };
affectation:  variable_name TOKEN_ASSIGN expression_arithmetique FININSTR{                    
                        if($1 != NULL) {
                            if($1->type == ENTIER){
                                printf("Type de %s correct:  %s\n", $1->nom, typeOf($1->type));

                                char nm[20];
                                strcpy(nm, $1->nom);
                                char exp[20]; 
                                strcpy(exp, $3);

                                strcpy(quad[ind][0],"=");
                                strcpy(quad[ind][1],exp);
                                strcpy(quad[ind][2]," ");
                                strcpy(quad[ind][3],nm);
                                ind++;
                                
                            }
                            else {
                                fprintf(stderr, "Erreur, type attendu: %s, trouvé: ENTIER\n", typeOf($1->type));
                                exit(1);
                            }
                        }
                        else {
                            fprintf(stderr, "ERREUR: Identifiant non declare\n");
                            yyerror("Compilation interrompue\n");
                            exit(1);
                        }
                }
                |
                variable_name TOKEN_ASSIGN ExpBool FININSTR{
                   
                        if($1 != NULL) {
                           
                            if($1->type == BOOLEEN){
                              
                            printf("Type de %s correct: %s\n", $1->nom, typeOf($1->type));

                                char nomm[20];
                                strcpy(nomm, $1->nom);
                                
                                char exp[20]; 
                                strcpy(exp, $3);
                                
                                strcpy(quad[ind][0],"=");
                                strcpy(quad[ind][1],exp);
                                strcpy(quad[ind][2]," ");
                                strcpy(quad[ind][3],nomm);
                                ind++;
                             }
                            else {
                                fprintf(stderr, "Erreur dans, type attendu: %s, trouvé: BOOLEEN\n", typeOf($1->type));
                                exit(1);
                            }
                        }
                        else {
                            fprintf(stderr, "ERREUR: Identifiant non declare.");
                            yyerror("Compilation interrompue");
                            exit(1);
                        }
                }
                |
                variable_name TOKEN_ASSIGN TOKEN_CHAR FININSTR{
                    if($1 != NULL) {
                            if($1->type == CARACTERE){
                            printf("Type de %s correct: %s\n", $1->nom, typeOf($1->type));
                            char nom[20];
                                strcpy(nom, $1->nom);
                                char f[20]=" " ;
                                strcpy(f, $3);
                                strcpy(quad[ind][0],"=");
                                strcpy(quad[ind][1],f);
                                strcpy(quad[ind][2]," ");
                                strcpy(quad[ind][3],nom);
                                ind++;
                             }
                            else {
                                fprintf(stderr, "Erreur dans, type attendu: %s, trouvé: CARACTERE\n", typeOf($1->type));
                                exit(1);
                            }
                        }
                        else {
                            fprintf(stderr, "ERREUR: Identifiant non declare.");
                            yyerror("Compilation interrompue");
                            exit(1);
                        }
                }
                ;
variable_name:	
        TOKEN_ID{
                        Identifiant *m = rechercherVar(table, $1);
                        
                        $$ = m;
                            
                }
		|
		TOKEN_ID CROCHET_G expression_arithmetique CROCHET_D{
			printf("Acces a un element  du tableau \n");
            Identifiant *q = rechercheElemTab(table, $1);
			$$= q;	
		}
		|
		TOKEN_ID TOKEN_ACSTRUCT TOKEN_ID{
            char * nstr = strcat( strcat($1, ":"), $3);
            $$ = rechercherVar(table, nstr);
		};

DECLARE:	TOKEN_ID NUM FININSTR{
   
            table->Entete_llc = declarerVar (table, $1, ENTIER, PRIMITIF);
			printf("Declaration dun entier\n");
		}
		|
		TOKEN_ID BOOL FININSTR{
        
        table->Entete_llc  = declarerVar (table, $1,BOOLEEN, PRIMITIF);
  
			printf("Declaration dun booleen\n");
		}
		|
		TOKEN_ID CHAR FININSTR{
          
            table->Entete_llc= declarerVar (table, $1,CARACTERE, PRIMITIF);
            
			printf("Declaration dun caractere\n");
		}
		|
		TOKEN_CONST TOKEN_ID TOKEN_NUMBER FININSTR{
            table->Entete_llc = declarerConstint (table, $2, ENTIER, $3); 
			printf("Declaration dune constante de type entier\n");
		}
		|
		TOKEN_CONST TOKEN_ID TOKEN_TRUE FININSTR{
            table->Entete_llc = declarerConstint (table, $2, BOOLEEN, 1);  
			printf("Declaration dune constante de type booleen\n");
		}
		|
		TOKEN_CONST TOKEN_ID TOKEN_FALSE FININSTR{
             table->Entete_llc = declarerConstint (table, $2, BOOLEEN, 0);
			printf("Declaration dune constante de type booleen\n");
		}
		|
		TOKEN_CONST TOKEN_ID TOKEN_CHAR FININSTR{
            char medium[2] = {$3, '\0'};
             table->Entete_llc = declarerConst (table, $2, CARACTERE,  medium); 
			printf("Declaration dune constante de type caractere\n");
		}
        |
        TOKEN_CONST TOKEN_ID TOKEN_TEXT FININSTR{
            table->Entete_llc = declarerConst (table, $2, TEXT, $3);
			printf("Declaration dune constante de type texte \n");
		}
		|
		TOKEN_ID NUM CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{
            table->Entete_llc = declarerTab(table, $1, ENTIER, $4);
			printf("Declaration dun tableau de type entier et de taille %ld\n",$4);
		}
		|
		TOKEN_ID BOOL CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{
		    table->Entete_llc = declarerTab(table, $1, BOOLEEN, $4);
            printf("Declaration dun tableau de type booleen et de taille %ld\n",$4);
		}
		|
		TOKEN_ID CHAR CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{
            table->Entete_llc = declarerTab(table, $1, CARACTERE, $4);
			printf("Declaration dun tableau de type caractere et de taille %ld\n",$4);
		}
		|
		TOKEN_ID TOKEN_ID CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{
			printf("Declaration dun tableau de type structure %s et de taille %ld\n",$2,$4);
		}
		|
		TOKEN_ID TOKEN_ID FININSTR{
            Structure * p = rechercherStructure(tableStruct, $2);
            if (p != NULL) {
                //Insertion du symbol de la structure
                table->Entete_llc= declarerVar(table, $1, STRUCTURE, COMPLEXE);

                //Insertion des symboles
                declarerChampsDeVariableDeTypeStructure(table, p, $1);
            } else {
                fprintf(stderr, "Structure %s non definit.\n", $2);
                exit(1); 
            }
            

			printf("Declaration dune variable de type structure\n");
		}
		|
		TOKEN_STRUCT TOKEN_ID ACCOLAD_G LISTE ACCOLAD_D FININSTR{
            tableStruct->tete = declarerStructure(tableStruct, $2);

            //On lie les champs déclaré avec leur structure, qui vien detre déclaré
            linkChampsDeStructure(tableStruct->tete, champBuffer);

            champBuffer = NULL;
			printf("Creation dune structure\n");
		};
LISTE:		%empty{}
                |
		LISTE CHAMP{
		};

CHAMP:		
    TOKEN_ID NUM FININSTR{
        if(champBuffer == NULL){
            champBuffer = initialisationBuffer();
        }
        
        champBuffer->tete = sauvegarderVariable(champBuffer, $1, ENTIER, 0);
    }
    |
    TOKEN_ID BOOL FININSTR{
        if(champBuffer == NULL)
            champBuffer = initialisationBuffer();
        
        champBuffer->tete = sauvegarderVariable(champBuffer, $1, BOOLEEN, 0);
    }
    |
    TOKEN_ID CHAR FININSTR{
        if(champBuffer == NULL)
            champBuffer = initialisationBuffer();
        
        champBuffer->tete = sauvegarderVariable(champBuffer, $1, CARACTERE, 0);
    }
    |
    TOKEN_ID NUM CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{
        if(champBuffer == NULL)
            champBuffer = initialisationBuffer();
        
        champBuffer->tete = sauvegarderVariable(champBuffer, $1, TABLEAU, $4);
    }
    |
    TOKEN_ID BOOL CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{
        if(champBuffer == NULL)
            champBuffer = initialisationBuffer();
        
        champBuffer->tete = sauvegarderVariable(champBuffer, $1, TABLEAU, $4);
    }
    |
    TOKEN_ID CHAR CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{
        if(champBuffer == NULL)
            champBuffer = initialisationBuffer();
        
        champBuffer->tete = sauvegarderVariable(champBuffer, $1, TABLEAU, $4);
    }
    |
    TOKEN_ID TOKEN_ID CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{
        if(champBuffer == NULL)
            champBuffer = initialisationBuffer();
        
        champBuffer->tete = sauvegarderVariable(champBuffer, $1, TABLEAU, $4);
    }
    |
    TOKEN_ID TOKEN_ID FININSTR{
    }
    ;
    
expression : 	expression_arithmetique
        {
           strcpy($$, $1);
            
		}
		|
		ExpBool{ 
        strcpy($$, $1); 
        };

expression_arithmetique: 
    TOKEN_NUMBER{ 
        char numb[20];       
        sprintf(numb, "%ld", $1); 
        //strcpy($$, numb);
         $$ = numb ;
        }
    |
    addition{ strcpy($$, $1);}
    |
    soustraction { strcpy($$, $1);}
    |
    multiplication { strcpy($$, $1);}
    |
    division{ strcpy($$, $1);}
    |
    modulo { strcpy($$, $1);}
    |
    PARENTHESE_G expression_arithmetique PARENTHESE_D {
       
        strcpy($$, $2); 
      
        }
    |
    variable_name {
        if ($1 != NULL) {
            if ($1->type != ENTIER) {
                fprintf(stderr, "Erreur variable %s, son type est : %s, type attendu: ENTIER \n", $1->nom, typeOf($1->type) );
                exit(1);
            } 
            else {
               char no[20]=" ";
               strcpy(no, $1->nom);
              strcpy($$, no);
            }
        } else {
            fprintf(stderr, "symbol non définit\n");
            exit(1);
        }
            
    }
    ;
addition:	
    expression_arithmetique TOKEN_ADD expression_arithmetique {
        strcpy(quad[ind][0],"+");
        
        char c1[20];
        strcpy(c1, $1);        
        strcpy(quad[ind][1],c1);

        char c2[20];
        strcpy(c2, $3); 
        strcpy(quad[ind][2],c2);

        char add[20] = "T_add";
        $$ = add;
        strcpy(quad[ind][3],add);       
        ind++;
        };
soustraction: 
    expression_arithmetique TOKEN_SOUSTR expression_arithmetique {
        char mm[20] = "T_sous";
        $$=mm;
        char cs1[20];
        strcpy(cs1, $1); 
        strcpy(quad[ind][0],"-");
        strcpy(quad[ind][1],cs1);  
        char cs2[20];
        strcpy(cs2, $3); 
        strcpy(quad[ind][2],cs2);
        strcpy(quad[ind][3],mm);       
        ind++;
        };
multiplication:	
    expression_arithmetique TOKEN_MULT expression_arithmetique {
        char mul[20] = "T_mult";
        $$= mul;
        char cm1[20];
        strcpy(cm1, $1); 
        strcpy(quad[ind][0],"*");
        strcpy(quad[ind][1],cm1);
        char cm2[20];
        strcpy(cm2, $3); 
        strcpy(quad[ind][2],cm2);
        strcpy(quad[ind][3],mul);       
        ind++;
        };
division:	
    expression_arithmetique TOKEN_DIVIS expression_arithmetique {
        char d[20] = "T_div";
        $$=d;
        char c1[20];
     
        strcpy(c1, $1); 
        
        strcpy(quad[ind][0],"/");
        strcpy(quad[ind][1],c1);
       char c2[20];
        strcpy(c2, $3); 
        strcpy(quad[ind][2],c2);
        strcpy(quad[ind][3],d);       
        ind++;
        };
modulo:	
    expression_arithmetique TOKEN_MOD expression_arithmetique { 
        char dol[20] = "T_mod";
        $$=dol;
        char c1[20];
        strcpy(c1, $1); 
        strcpy(quad[ind][0],"%");
        strcpy(quad[ind][1],c1);
        char c2[20];
        strcpy(c2, $3); 
        strcpy(quad[ind][2],c2);
        strcpy(quad[ind][3],dol);       
        ind++;
        };

ecriture:	TOKEN_WRITE variable_name FININSTR {

}
        |
        TOKEN_WRITE TOKEN_TEXT FININSTR
        ;

lecture:	TOKEN_READ variable_name FININSTR;		
while :         TOKEN_WHILE ExpBool TOKEN_BEGIN bloc_code END{
                    
                };
for :           TOKEN_FOR variable_name TOKEN_FROM TOKEN_NUMBER TOKEN_COMMA TOKEN_NUMBER TOKEN_BEGIN bloc_code END{
                   
                    if ($2 != NULL) {
                        if ($2->type != ENTIER) {
                            fprintf(stderr, "Erreur de type : %s, son type est : %s, type attendu: ENTIER \n", $2->nom, typeOf($2->type));
                            exit(1);
                        } 
                        else {
                        
                        }
                    } else {
                        fprintf(stderr, "symbol non définit\n");
                        exit(1);
                    }
                }
                |
                TOKEN_FOR variable_name TOKEN_IN variable_name TOKEN_BEGIN bloc_code END {
                    if ($2 != NULL) {
                        if ($2->type != ENTIER) {
                            fprintf(stderr, "Erreur de type : %s, son type est : %s, type attendu: ENTIER \n", $2->nom, typeOf($2->type));
                            exit(1);
                        } 
                        else {
                        
                        }
                    } else {
                        fprintf(stderr, "symbol non définit\n");
                        exit(1);
                    }
                    if ($4 != NULL) {
                        if ($4->type != TABLEAU) {
                            fprintf(stderr, "Erreur de type : %s, son type est : %s, type attendu: TABLEAU \n", $4->nom, typeOf($4->type));
                            exit(1);
                        } 
                        else {
                        
                        }
                    } else {
                        fprintf(stderr, "symbol non définit\n");
                        exit(1);
                    }
                };
conditionnel :  TOKEN_IF ExpBool TOKEN_BEGIN  bloc_code END {

                }
                |TOKEN_IF ExpBool TOKEN_BEGIN  bloc_code TOKEN_ELSE  bloc_code END{
                    
                };

ExpBool:
    variable_name { 
        if ($1 != NULL) {
            if ($1->type != BOOLEEN) {
                fprintf(stderr, "Erreur de type : %s, son type est : %s, type attendu: BOOLEEN \n", $1->nom, typeOf($1->type));
                exit(1);
            } 
            else {
             char no[20]=" ";
               strcpy(no, $1->nom);
              strcpy($$, no);
            }
        } else {
            fprintf(stderr, "symbol non définit\n");
            exit(1);
        }
    } 
    | Comparaison {
        strcpy($$, $1);
    }
    | TOKEN_FALSE {
        char fals[2]=" 0";
       // strcpy(fals,"0");
       strcpy($$,fals);
    }
    | TOKEN_TRUE  { 
        char tru[2]=" 1";
       // strcpy(tru,"1");
        strcpy($$,tru);
    }
    | PARENTHESE_G ExpBool PARENTHESE_D { 
        strcpy($$, $2);
    }
    | TOKEN_NOT ExpBool { 
        
        char not[20] = "T_not";
        $$=not;
        char b1[20];
        strcpy(b1, $2);

        strcpy(quad[ind][0],"not");
        strcpy(quad[ind][1],b1);
        strcpy(quad[ind][2]," ");
        strcpy(quad[ind][3],not);       
        ind++;
       
    }
    | ExpBool TOKEN_AND ExpBool {
        char and[20] = "T_and";
        $$=and;
        char b1[20];
        strcpy(b1, $1);
        char b2[20];
        strcpy(b2, $3);

        strcpy(quad[ind][0],"and");
        strcpy(quad[ind][1],b1);
        strcpy(quad[ind][2],b2);
        strcpy(quad[ind][3],and);       
        ind++;
     }
    | ExpBool TOKEN_OR ExpBool  {
        char or[20] = "T_or";
        $$=or;
        char b1[20];
        strcpy(b1, $1);
        char b2[20];
        strcpy(b2, $3);

        strcpy(quad[ind][0],"or");
        strcpy(quad[ind][1],b1);
        strcpy(quad[ind][2],b2);
        strcpy(quad[ind][3],or);       
        ind++;
    }
    ;
Comparaison:
    comparable TOKEN_EGAL comparable {// $$=($1 == $3); 
        char or[20] = "T_egal";
        $$=or;
        char b1[20];
        strcpy(b1, $1);
        char b2[20];
        strcpy(b2, $3);

        strcpy(quad[ind][0],"==");
        strcpy(quad[ind][1],b1);
        strcpy(quad[ind][2],b2);
        strcpy(quad[ind][3],or);       
        ind++;
    }
    | comparable TOKEN_DIFF comparable {// $$=($1 != $3);
        char or[20] = "T_diff";
        $$=or;
        char b1[20];
        strcpy(b1, $1);
        char b2[20];
        strcpy(b2, $3);

        strcpy(quad[ind][0],"!=");
        strcpy(quad[ind][1],b1);
        strcpy(quad[ind][2],b2);
        strcpy(quad[ind][3],or);       
        ind++; 
    }
    | comparable TOKEN_SUP comparable {// $$=($1 > $3); 
        char or[20] = "T_sup";
        $$=or;
        char b1[20];
        strcpy(b1, $1);
        char b2[20];
        strcpy(b2, $3);

        strcpy(quad[ind][0],">");
        strcpy(quad[ind][1],b1);
        strcpy(quad[ind][2],b2);
        strcpy(quad[ind][3],or);       
        ind++;
    }
    | comparable TOKEN_SUPEGAL comparable {// $$=($1 >= $3); 
    char or[20] = "T_supeg";
        $$=or;
        char b1[20];
        strcpy(b1, $1);
        char b2[20];
        strcpy(b2, $3);

        strcpy(quad[ind][0],">=");
        strcpy(quad[ind][1],b1);
        strcpy(quad[ind][2],b2);
        strcpy(quad[ind][3],or);       
        ind++;
    }
    | comparable TOKEN_INF comparable {// $$=($1 < $3); 
    char or[20] = "T_inf";
        $$=or;
        char b1[20];
        strcpy(b1, $1);
        char b2[20];
        strcpy(b2, $3);

        strcpy(quad[ind][0],"<");
        strcpy(quad[ind][1],b1);
        strcpy(quad[ind][2],b2);
        strcpy(quad[ind][3],or);       
        ind++;
    }
    | comparable TOKEN_INFEGAL comparable {// $$=($1 <= $3);
        char or[20] = "T_infeg";
        $$=or;
        char b1[20];
        strcpy(b1, $1);
        char b2[20];
        strcpy(b2, $3);

        strcpy(quad[ind][0],"<=");
        strcpy(quad[ind][1],b1);
        strcpy(quad[ind][2],b2);
        strcpy(quad[ind][3],or);       
        ind++;
     }
    ;
comparable:
    TOKEN_NUMBER{
         char numb[20];       
         sprintf(numb, "%d", $1); 
        //strcpy($$, numb);
         $$ = numb ;
        
    }
    |
    variable_name {
    if ($1 != NULL) {
        if ($1->type != ENTIER) {
            fprintf(stderr, "Erreur variable %s, son type est : %s, type attendu: ENTIER \n", $1->nom, typeOf($1->type) );
            exit(1);
        } 
        else {
            char nom[20];
               strcpy(nom, $1->nom);
         strcpy($$, nom);
        }
    } else {
        fprintf(stderr, "symbol non définit\n");
        exit(1);
    }
    }
    ;
                            
                
%%

int main(int argc , char** argv) {
    //initialisation des Tables des symboles et structures globales
    table = initialisation();
    tableStruct = initialisationTableStructures();
    
    ind =0 ;

    yyin= fopen (argv[1], "r");
    int result = yyparse();
    if(result == 0) {
        printf("\n********\n\t\tProgramme syntaxiquement correct\n********\n");
        AfficherTable(table->Entete_llc) ;
        afficher(quad,ind);
    }
   
}

void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
 }