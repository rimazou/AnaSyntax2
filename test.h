#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

#include <malloc.h>
#include <stdlib.h>
#include <string.h>


enum typePossible{ ENTIER, BOOLEEN, CARACTERE, TEXT, TABLEAU, STRUCTURE } ;
enum Nature{PRIMITIF, COMPLEXE};
enum NatureID{CONSTANTE, VARIABLE};
typedef enum typePossible typePossible;
typedef enum Nature Nature;
typedef enum NatureID NatureID;
typedef struct Identifiant Identifiant;

struct Identifiant {
char nom[26];
char valeur[26]; 
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
Identifiant* declarerVar (TableIds* table, char* nom,typePossible type, Nature nature);
Identifiant* declarerConst (TableIds* table, char* nom,typePossible type, char* valeur);
Identifiant* declarerConstint (TableIds* table, char* nom ,typePossible type, int valeur);
Identifiant* declarerTab(TableIds* table, char* nom, typePossible type, int taille);
//Identifiant* declarerStruct(TableIds* table, char*nom);
void AfficherTable(Identifiant* entete);
Identifiant* rechercherVar(TableIds* table, char* nom);
Identifiant* rechercheElemTab(TableIds* table, char* nom, int index);
char* typeOf(typePossible type);
void afficher(char table[100][4][25], int index);


//Gestion des structures

struct Champ {
   char * nom;
   typePossible type;
   int taille;
   struct Champ* champSuivant;
};


struct Structure {
   char* nom;
   struct Champ* champSuivant;
   TableIds* tableLocale;
   struct Structure* suivant;
};
typedef struct Structure Structure;
typedef struct { Structure* tete;} TableStructures;

//Ce buffer sert à sauvegarder les variables analysé à l'interieure de la structure
typedef struct BufferLLC{
   struct Champ* tete;
}
BufferLLC;

TableStructures* initialisationTableStructures();
Structure* declarerStructure(TableStructures* table, char* nom);
Structure* rechercherStructure(TableStructures* table, char* nom);
void linkChampsDeStructure(Structure* myStrct, BufferLLC *buffer);
int declarerChampsDeVariableDeTypeStructure(TableIds* table, Structure* structure, char* nomVariable);
BufferLLC* initialisationBuffer();
struct Champ* sauvegarderVariable(BufferLLC* buffer,char* nom, typePossible type, int taille);



#endif // TEST_H_INCLUDED
