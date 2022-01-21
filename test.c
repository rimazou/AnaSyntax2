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

// POUR UNE VARIABLE SIMPLE
Identifiant* declarerVar (TableIds* table, char* nom , typePossible type, Nature nature)
{
    // nous savons qu'un declaration contient assez d'information pour alouer directement avec des valeurs
    Identifiant* p=NULL;
    p = malloc(sizeof(Identifiant));
    strcpy((p->nom),nom);
    p->type = type ;
    p->nature = nature;
    p->natureId = VARIABLE ;
   
    if (p == NULL){exit(1);}
    p->suivant = table->Entete_llc;
    return(p);
}
//LES CONSTANTES
Identifiant* declarerConst (TableIds* table, char* nom ,typePossible type, char* valeur){

    Identifiant* p=NULL;
    p = malloc(sizeof(Identifiant));
    strcpy((p->nom),nom);
    strcpy((p->valeur),valeur);
     
    p->type = type ;
    p->nature = PRIMITIF;
    p->natureId = CONSTANTE ; 
    if (p == NULL){exit(1);}
     p->suivant = table->Entete_llc;
    return(p);
}

Identifiant* declarerConstint (TableIds* table, char* nom ,typePossible type, int valeur){

    Identifiant* p=NULL;
    printf("%s  %d\n", nom,valeur);
    p = malloc(sizeof (Identifiant));
   
    strcpy((p->nom),nom);
    sprintf(p->valeur, "%d", valeur);
    
    p->type = type ;
    p->nature = PRIMITIF;
    p->natureId = CONSTANTE ; 
    if (p == NULL){exit(1);}
     p->suivant = table->Entete_llc;
    return(p);
}
//DECLARATION D'UN TABLEAU
Identifiant* declarerTab(TableIds* table, char* nom, typePossible type, int taille){
    
    if (taille<=0){exit(1);}
    Identifiant* p = NULL;
    p = malloc(sizeof(Identifiant));
    
    strcpy((p->nom),nom);
    
    p->type = TABLEAU ;
    sprintf(p->valeur, "%d", taille);
    //strcpy(p->valeur, taille);
    p->nature = COMPLEXE ;
    p->natureId = VARIABLE ; 
    // p represente la tete de la sous-llc du tableau
    Identifiant* q = NULL;
    q = malloc(sizeof(Identifiant));
    p->suivant = q;
    Identifiant* z = NULL;
    //q et z c'est pour le parcour de llc
    for (int i = 1; i <= taille; i++)
    {
        
        //strcpy((q->nom),nom);
        sprintf(q->nom, "%d", i);
        q->type = type ;
        if (type == TABLEAU || type == STRUCTURE)
        {
              q->nature = COMPLEXE ;
        }
        else  q->nature = PRIMITIF;
        q->natureId = VARIABLE ; 
        if (i != taille)
        {
             z =malloc(sizeof(Identifiant));
        }

        q->suivant = z ;
        q = z ;
      
    }
    q->suivant = table->Entete_llc ; //lier entre la table des symbole et cette sous-llc
    
    return p;
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
            printf("Type: Entier \n");
        }
         if (p->type == BOOLEEN)
        {
            printf("Type: BOOL \n");
        }

        if (p->type==TABLEAU)
        {
             printf("Taille: %s\n", p->valeur);
        }else{
             printf("Valeur: %s\n", p->valeur);
        }

         if (p->natureId==CONSTANTE)
        {
             printf("CONSTANTE\n");
        }else{
             printf("VARIABLE\n");
        }
        
        printf("\n");
        
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

Identifiant* rechercheElemTab(TableIds* table, char* nom, int index){
    Identifiant* p = table->Entete_llc;
    int c = 1;
    while (c == 1)
    {
        if (strcmp(p->nom, nom) == 0)
        {
            c=0;
        }else
        p = p->suivant;
    }
    if (c==0)
    {
        for (int i = 1; i <= index ; i++)
        {
            p = p->suivant;   
        }
        printf("element trouver: %s\n",p->nom);
        return p;
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

