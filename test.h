#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

#include "parser.tab.h"

enum typePossible{ ENTIER, BOOLEEN, CARACTERE, TEXT } ;
enum Nature{PRIMITIF, COMPLEXE};
enum NatureID{CONSTANTE, VARIABLE};
typedef enum typePossible typePossible;
typedef enum Nature Nature;
typedef enum NatureID NatureID;
typedef struct Identifiant Identifiant;

struct Identifiant {
char nom[25];
char valeur[25];
enum Nature nature;
enum NatureID natureId;
enum typePossible type;
Identifiant* suivant ;
};
typedef struct
{
   Identifiant* Entete_llc;
}TableIds;



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
    identif->suivant = NULL;
    tableId->Entete_llc = identif;


    return tableId;
}
/*allocation d'un maillon*/
Identifiant* declarerVar (char nom[],typePossible type, Nature nature)
{
    // nous savons qu'un declaration contient assez d'information pour alouer directement avec des valeurs
    Identifiant* p=NULL;
    p = malloc(sizeof(Identifiant));
    strcpy((p->nom),nom);
    p->type = type ;
    p->nature = nature;
    p->natureId = VARIABLE ;
   
    if (p == NULL){exit(1);}
    return(p);
}
/*
Identifiant* garbage (char nom[],typePossible type, Nature nature)
{
    // nous savons qu'un declaration contient assez d'information pour alouer directement avec des valeurs
    Identifiant* p=NULL;
    p = malloc(sizeof(Identifiant));
    strcpy((p->nom),nom);
    p->type = type ;
    p->nature = nature;
    p->natureId = VARIABLE ;
    switch (type)
   {
      case NUM:  p->type = ENTIER; break;
      case BOOL : p->type = BOOLEEN; break;
      case CHAR :p->type = CARACTERE; break;
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
*/




#endif // TEST_H_INCLUDED
