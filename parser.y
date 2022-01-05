%{
#include "global.h"
#include <string.h>

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
}

/* regles d'associativites: l'ordre de priorite est inverse a celui de lex, last one is plus prioritaire*/

%left TOKEN_ADD TOKEN_SOUSTR TOKEN_OR
%left TOKEN_MULT TOKEN_DIVIS TOKEN_AND
%left TOKEN_NOT


%right TOKEN_MOD
%right PARENTHESE_G PARENTHESE_D

/* liste des expressions i.e. les non terminaux */


%type<text>     commentaire
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
%type<text>     variable_name
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

bloc_code:      instruction bloc_code | commentaire bloc_code | %empty | error bloc_code {printf("erreur syntaxique a la ligne %d",linenbr);erreurSyntax=true;};

bloc_declaration: 
    DECLARE bloc_declaration | commentaire bloc_declaration | %empty;
commentaire:    TOKEN_COMMENT{
                    printf("commentaire ");
                }
                |
                TOKEN_MULTICOM{
                    printf("commentaire de multiples lignes");
                };                

instruction:    affectation{
			printf("\tInstruction type Affectation\n");

                }
                |
                lecture{

                }
                |
                ecriture{

                }
                |
                conditionnel{
                    printf("conditionnel\n");
                }
                |
                while{
                    printf("Boucle Tant que\n");
                    
                }
                |
                for{
                    printf("Boucle Pour\n");
                    
                };
affectation:  variable_name TOKEN_ASSIGN expression FININSTR{
                        /* $1 est la valeur du premier non terminal. Ici c'est la valeur du non terminal variable. 				$3 est la valeur du 2nd non terminal. */
                        printf("\t\tAffectation sur la variable \n");
                }
                |variable_name TOKEN_ASSIGN TOKEN_CHAR FININSTR
                ;

variable_name:	
        TOKEN_ID{
            printf("hadi variabl");
                       // $$=$1;
                        //$$=strdup($1);
                }
		|
		TOKEN_ID CROCHET_G expression_arithmetique CROCHET_D{
			printf("Acces a lelement  du tableau \n");
			//$$=strdup($1[$3]);	
		}
		|
		TOKEN_ID TOKEN_ACSTRUCT TOKEN_ID{
			printf("Acces au champss de la structure \n");
			//$$=strdup($1.$3);	
		};

DECLARE:	TOKEN_ID NUM FININSTR{
			printf("Declaration dun entier\n");
		}
		|
		TOKEN_ID BOOL FININSTR{
			printf("Declaration dun booleen\n");
		}
		|
		TOKEN_ID CHAR FININSTR{
			printf("Declaration dun caractere\n");
		}
		|
		TOKEN_CONST TOKEN_ID TOKEN_NUMBER FININSTR{
			printf("Declaration dune constante de type entier\n");
		}
		|
		TOKEN_CONST TOKEN_ID TOKEN_TRUE FININSTR{
			printf("Declaration dune constante de type booleen\n");
		}
		|
		TOKEN_CONST TOKEN_ID TOKEN_FALSE FININSTR{
			printf("Declaration dune constante de type booleen\n");
		}
		|
		TOKEN_CONST TOKEN_ID TOKEN_CHAR FININSTR{
			printf("Declaration dune constante de type caractere\n");
		}
		|
		TOKEN_ID NUM CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{
			printf("Declaration dun tableau de type entier et de taille %d\n",$4);
		}
		|
		TOKEN_ID BOOL CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{
			printf("Declaration dun tableau de type booleen et de taille %d\n",$4);
		}
		|
		TOKEN_ID CHAR CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{
			printf("Declaration dun tableau de type caractere et de taille %d\n",$4);
		}
		|
		TOKEN_ID TOKEN_ID CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{
			printf("Declaration dun tableau de type structure %s et de taille %d\n",$2,$4);
		}
		|
		TOKEN_ID TOKEN_ID FININSTR{
			printf("Declaration dune structure");
		}
		|
		TOKEN_STRUCT TOKEN_ID ACCOLAD_G LISTE ACCOLAD_G FININSTR{
			printf("Creation dune structure");
		};
LISTE:		%empty{}
                |
		LISTE CHAMP{
		};

CHAMP:		TOKEN_ID NUM FININSTR{}
		|
		TOKEN_ID BOOL FININSTR{}
		|
		TOKEN_ID CHAR FININSTR{}
		|
		TOKEN_ID NUM CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{}
		|
		TOKEN_ID BOOL CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{}
		|
		TOKEN_ID CHAR CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR{}
		|
		TOKEN_ID TOKEN_ID FININSTR{};
		
expression : 	expression_arithmetique{

		
		}
		|
		ExpBool{
		
		}; 

expression_arithmetique: TOKEN_NUMBER{
                                        printf("\t\t\tNombre : %ld\n",$1);
 /* Comme le token TOK_NOMBRE est de type entier et que on a type expression_arithmetique comme du texte, il nous faut convertir la valeur en texte. */
                                      /*  int length=snprintf(NULL,0,"%ld",$1);
                                        char* str=malloc(length+1);
                                        snprintf(str,length+1,"%ld",$1);*/
                                        //$$=strdup(str);
                                        $$=$1;
                                       // free(str);
                                }
                                |
                                addition{
                                }
                                |
                                soustraction{
                                }
                                |
                                multiplication{
                                }
                                |
                                division{
                                }
                                |
                                modulo{
                                }
                                |
                                PARENTHESE_G expression_arithmetique PARENTHESE_D{
                                        printf("\t\t\tCest une expression artihmetique entre parentheses\n");
                                        //$$=strcat(strcat(strdup("("),strdup($2)),strdup(")"));
                                        $$=$2;
                                };
addition:	
    expression_arithmetique TOKEN_ADD expression_arithmetique{
        printf("\t\t\tAddition\n");
        //$$=strcat(strcat(strdup($1),strdup("+")),strdup($3));
        $$=$1+$3;
    };
soustraction:	
    expression_arithmetique TOKEN_SOUSTR expression_arithmetique{
        printf("\t\t\tSoustraction\n");
        //$$=strcat(strcat(strdup($1),strdup("-")),strdup($3));
        $$=$1-$3;
    };
multiplication:	
    expression_arithmetique TOKEN_MULT expression_arithmetique{
        printf("\t\t\tMultiplication\n");
        //$$=strcat(strcat(strdup($1),strdup("*")),strdup($3));
        $$=$1*$3;
    };
division:	
    expression_arithmetique TOKEN_DIVIS expression_arithmetique{
        printf("\t\t\tDivision\n");
        //$$=strcat(strcat(strdup($1),strdup("/")),strdup($3));
        $$=$1/$3;
    };
modulo:	
    expression_arithmetique TOKEN_MOD expression_arithmetique{
        printf("\t\t\tModulo\n");
        //$$=strcat(strcat(strdup($1),strdup("%")),strdup($3));
        $$=$1%$3;
    };

ecriture:	TOKEN_WRITE variable_name FININSTR{
		//printf("\t\t\t Affichage de variable %s \n",$2);
		}
        |TOKEN_WRITE TOKEN_TEXT FININSTR {}
        ;

lecture:	TOKEN_READ variable_name FININSTR{
	//	printf("\t\t\t Lecture variable %s\n ",$2);
		};		
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
                 variable_name { printf("ana machi variable ana expression_booleenne"); } //verifier si la variable est une variable booleen dans l'analyse semantique
                | Comparaison {//$$ = $1;
                }
                | TOKEN_FALSE { //$$=0; 
                }
                | TOKEN_TRUE  { //$$=1; 
                }
                | PARENTHESE_G ExpBool PARENTHESE_D {// $$=$2;
                 }
                | TOKEN_NOT ExpBool { //$$=!$2; 
                }
                | ExpBool TOKEN_AND ExpBool { //$$=($1)&&($3); 
                }
                | ExpBool TOKEN_OR ExpBool  { //$$=($1)||($3); 
                }
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
                 TOKEN_NUMBER | variable_name
                 ;
                              
                
%%

int main(int argc , char** argv) {
    yyin= fopen (argv[1], "r");
  yyparse();
  
}

void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
 }