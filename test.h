#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

#include "parser.tab.h"

typedef enum { ENTIER, BOOLEEN, CARACTERE, TEXT }typePossible ;
typedef enum {PRIMITIF, COMPLEXE}Nature;
typedef enum {CONSTANTE, VARIABLE}NatureID;


typedef struct Identifiant Identifiant ;
struct Identifiant{
char nom[25];
char valeur[25];
Nature nature;
NatureId natureId;
typePossible type;
Identifiant* suivant ;
};

typedef struct TableIds TablesIds ;
struct TableIds
{
   Identifiant* tete;
};

/*creation de la table*/
TableIds* initialisation()
{
    TableIds* tableId = malloc(sizeof(TableIds));
 Identifiant* identif = malloc(sizeof(Identifiant));

    if (tableId == NULL || identif == NULL)
    {
        exit(EXIT_FAILURE);
    }

    strcpy((identif->nom), "");
    strcpy((identif->valeur),"");
    identif->nature = NULL;
    identif->natureId = NULL;
    identif->type = NULL;
    identif->suivant = NULL;
    tableId->Entete_llc = maillon;


    return tableId;
}
/*allocation d'un maillon*/
Identifiant* declarer (char nom[],yytokentype type, yytokentype natureID)
{
    // nous savons qu'un declaration contient assez d'information pour alouer directement avec des valeurs
    Identifiant* p=NULL;
    p = malloc(sizeof(Identifiant));
    strcpy((p->nom),nom);

    switch (type)
   {
      case (NUM || TOKEN_NUMBRT):  p->type = ENTIER; break;
      case (BOOL ||TOKEN_TRUE||TOKEN_FALSE) : p->type = BOOLEEN; break;
      case (CHAR || TOKEN_CHAR) :p->type = CARACTERE; break;
      default : printf("\n autre chose");
   }

    switch (natureID)
   {
      case TOKEN_CONST:  p->natureId = CONSTANTE; break;
      default : p->natureId = VARIABLE;
   }
    if (type == ENTIER || type == BOOLEEN || type == CARACTERE)
    {
        p->nature = PRIMITIF;
    }
    if (p == NULL){exit(1);}
    return(p);
}

TableIds* ajouter(TableIds* table,Identifiant* maille) 
{
(table->tete)->suivant = maille;
}

void AfficherTable (Identifiant* tete)
{
	Identifiant* p;
	p=tete;

	while(p!=NULL){
		printf("Nom :%s\n",p->nom);
		printf("Nature identif: %s\n",p->natureId);
        printf("Nature: %s\n",p->nature);
        printf("Type: %s\n",p->type);

		p=p->suivant;


	}

}

#endif // TEST_H_INCLUDED
