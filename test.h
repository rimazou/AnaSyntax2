#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

#include "parser.tab.h"
#include <malloc.h>
#include <stdlib.h>
#include <string.h>


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

//Definitions
TableIds* initialisation();
Identifiant* declarerVar (char nom[],typePossible type, Nature nature);
void AfficherTable(Identifiant* entete);



#endif // TEST_H_INCLUDED
