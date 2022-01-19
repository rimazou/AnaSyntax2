#include "test.h"



/*creation de la table*/
TableIds* initialisation()
{
    TableIds* tableId = malloc(sizeof(TableIds));
 Identifiant* identif = malloc(sizeof(Identifiant));

    if (tableId == NULL || identif == NULL)
    {
        exit(EXIT_FAILURE);
    }

    tableId->Entete_llc = NULL;


    return tableId;
}
/*allocation d'un maillon*/
Identifiant* declarerVar (char* nom,typePossible type, Nature nature)
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

//Affichage de table
void AfficherTable(Identifiant* tete) {
    Identifiant* p;
	p=tete;

    printf("Affichage de la table des IDs \n");
	while(p!=NULL){
		printf("Token :%s\n",p->nom);
        if(p->nature == PRIMITIF)
		    printf("Nature: PRIMITIF\n");
        else
		    printf("Nature: COMPLEXE\n");

        if (p->type == ENTIER)
        {
            printf("Type: Eniter \n");
        }

        printf("Valeur: %s\n", p->valeur);
        
		p=p->suivant;
	}
}

//Recherche
Identifiant* rechercherVar(TableIds* table,char* nom  ) {
    Identifiant* p = table->Entete_llc;

    while (p != NULL)
    {
        if (strcmp(p->nom, nom) == 0)
        {
            return p;
        }
        p = p->suivant;
    }
    return NULL;
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

