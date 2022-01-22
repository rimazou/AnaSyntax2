%{
#include "global.h"
#include <string.h>
#include <stdbool.h>


extern TableIds * table = NULL;
extern TableStructures * tableStruct = NULL;
extern BufferLLC* champBuffer = NULL;

Identifiant* p = NULL;
Identifiant* q = NULL;

bool erreurSyntax = false;
extern unsigned int linenbr;
extern bool erreurLexical;

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
%type<num>     expression_arithmetique
%type<text>     while
%type<text>     for
%type<varId>     variable_name
%type<num>     addition
%type<num>     soustraction
%type<num>     multiplication
%type<num>     division
%type<BOOLEAN>     ExpBool
%type<BOOLEAN>     Comparaison
%type<num>     comparable
%type<num>     modulo

/* liste des tokens i.e. les terminaux */

%token          TOKEN_MULTICOM
%token          TOKEN_COMMENT
%token <CHARACTER>   TOKEN_CHAR
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
                                printf("Type correct: %s\n", $1->nom);
                                sprintf($1->valeur, "%ld", $3);
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
                            printf("Type correct: %s\n", $1->nom);
                             sprintf($1->valeur, "%d", $3);
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
                |variable_name TOKEN_ASSIGN TOKEN_CHAR FININSTR
                ;


variable_name:	
        TOKEN_ID{
                        Identifiant *m = rechercherVar(table, $1);
                        
                        $$ = m;
                            
                }
		|
		TOKEN_ID CROCHET_G expression_arithmetique CROCHET_D{
			printf("Acces a un element  du tableau \n");
            q = rechercheElemTab(table, $1, $3);
			$$= q;	
		}
		|
		TOKEN_ID TOKEN_ACSTRUCT TOKEN_ID{
            char * nom = strcat( strcat($1, ":"), $3);
            $$ = rechercherVar(table, nom);
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
			printf("Declaration dun tableau de type entier et de taille %d\n",$4);
		}
		|
		TOKEN_ID BOOL CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{
		    table->Entete_llc = declarerTab(table, $1, BOOLEEN, $4);
            printf("Declaration dun tableau de type booleen et de taille %d\n",$4);
		}
		|
		TOKEN_ID CHAR CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{
            table->Entete_llc = declarerTab(table, $1, CARACTERE, $4);
			printf("Declaration dun tableau de type caractere et de taille %d\n",$4);
		}
		|
		TOKEN_ID TOKEN_ID CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{
			printf("Declaration dun tableau de type structure %s et de taille %d\n",$2,$4);
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
    
expression : 	expression_arithmetique{

		
		}
		|
		ExpBool{
		
		}; 

expression_arithmetique: 
    TOKEN_NUMBER{ $$=$1;}
    |
    addition
    |
    soustraction
    |
    multiplication
    |
    division
    |
    modulo
    |
    PARENTHESE_G expression_arithmetique PARENTHESE_D {$$=$2;}
    |
    variable_name {
        if ($1 != NULL) {
            if ($1->type != ENTIER) {
                fprintf(stderr, "Erreur variable %s, son type est : %s, type attendu: ENTIER \n", $1->nom, typeOf($1->type) );
                exit(1);
            } 
            else {
                $$= atoi($1->valeur);
            }
        } else {
            fprintf(stderr, "symbol non définit");
            exit(1);
        }
            
    }
    ;
addition:	
    expression_arithmetique TOKEN_ADD expression_arithmetique {$$=$1+$3;};
soustraction: 
    expression_arithmetique TOKEN_SOUSTR expression_arithmetique {$$=$1-$3;};
multiplication:	
    expression_arithmetique TOKEN_MULT expression_arithmetique {$$=$1*$3;};
division:	
    expression_arithmetique TOKEN_DIVIS expression_arithmetique { $$=$1/$3;};
modulo:	
    expression_arithmetique TOKEN_MOD expression_arithmetique { $$=$1%$3; };

ecriture:	TOKEN_WRITE variable_name FININSTR {}
        |
        TOKEN_WRITE TOKEN_TEXT FININSTR
        ;

lecture:	TOKEN_READ variable_name FININSTR;		
while :         TOKEN_WHILE ExpBool TOKEN_BEGIN bloc_code END{
                    
                };
for :           TOKEN_FOR TOKEN_ID TOKEN_FROM TOKEN_NUMBER TOKEN_COMMA TOKEN_NUMBER TOKEN_BEGIN bloc_code END{

                }
                |
                TOKEN_FOR TOKEN_ID TOKEN_IN TOKEN_ID TOKEN_BEGIN bloc_code END {

                }
conditionnel :  TOKEN_IF ExpBool TOKEN_BEGIN  bloc_code END {

                }
                |TOKEN_IF ExpBool TOKEN_BEGIN  bloc_code TOKEN_ELSE  bloc_code END{
                    
                }

ExpBool:
    variable_name { 
        if ($1 != NULL) {
            if ($1->type != ENTIER) {
                fprintf(stderr, "Erreur de type : %s, son type est : %s, type attendu: ENTIER \n", $1->nom, typeOf($1->type));
                exit(1);
            } 
            else {
                $$= atoi($1->valeur);
            }
        } else {
            fprintf(stderr, "symbol non définit");
            exit(1);
        }
    } 
    | Comparaison {$$ = $1;}
    | TOKEN_FALSE { $$=0;}
    | TOKEN_TRUE  { $$=1; }
    | PARENTHESE_G ExpBool PARENTHESE_D { $$=$2;}
    | TOKEN_NOT ExpBool { $$=!$2;}
    | ExpBool TOKEN_AND ExpBool { $$=($1)&&($3); }
    | ExpBool TOKEN_OR ExpBool  { $$=($1)||($3); }
    ;
Comparaison:
    comparable TOKEN_EGAL comparable { $$=($1 == $3); }
    | comparable TOKEN_DIFF comparable { $$=($1 != $3); }
    | comparable TOKEN_SUP comparable { $$=($1 > $3); }
    | comparable TOKEN_SUPEGAL comparable { $$=($1 >= $3); }
    | comparable TOKEN_INF comparable { $$=($1 < $3); }
    | comparable TOKEN_INFEGAL comparable { $$=($1 <= $3); }
    ;
comparable:
    TOKEN_NUMBER
    |
    variable_name {
    if ($1 != NULL) {
        if ($1->type != ENTIER) {
            fprintf(stderr, "Erreur variable %s, son type est : %s, type attendu: ENTIER \n", $1->nom, typeOf($1->type) );
            exit(1);
        } 
        else {
            $$= atoi($1->valeur);
        }
    } else {
        fprintf(stderr, "symbol non définit");
        exit(1);
    }
    }
    ;
                              
                
%%

int main(int argc , char** argv) {
    //initialisation des Tables des symboles et structures globales
    table = initialisation();
    tableStruct = initialisationTableStructures();

    yyin= fopen (argv[1], "r");
    int result = yyparse();
    if(result == 0) {
        printf("\n********\n\t\tProgramme syntaxiquement correct\n********\n");
        AfficherTable(table->Entete_llc) ;
    }
   
}

void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
 }