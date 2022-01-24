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
        char n[25];
        strcpy(n, nom);
        char ind[5];
        sprintf(ind, "%d", i);
        
        strcpy((q->nom),strcat(n,ind));
       // sprintf(q->nom, "%d", i);
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

    printf("\t\tAffichage de la table des symboles \n\n");
    printf("\t%-12s\t%-12s\t%-12s\t%-12s\t%-12s\n\n", "NOM", "VALEUR", "TYPE", "NATURE", "NATUREID");
	while(p!=NULL){
		printf("\t%-12s\t",p->nom);
        if(p->type== BOOLEEN || p->type== ENTIER || p->type==TABLEAU) printf("%-12s\t",p->valeur);
        else   printf("%-12s\t", p->valeur);
        printf("%-12s\t", typeOf(p->type));
        
        if(p->nature == PRIMITIF)
		    printf("%-12s\t", "PRIMITIF");
        else
           printf("%-12s\t", "COMPLEXE");
		
         if (p->natureId==CONSTANTE)
        {
             printf("%-12s\n","CONSTANTE");
        }else{
             printf("%-12s\n","VARIABLE");
        }
        
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

Identifiant* rechercheElemTab(TableIds* table, char* nom){
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
        p = p->suivant;
    
        return p;
    } 
    return NULL;
}

char* typeOf(typePossible type) {
    switch (type)
    {
    case ENTIER:
        return "ENTIER";
        break;
    case BOOLEEN:
        return "BOOLEEN";
        break;
    case CARACTERE:
        return "CARACTERE";
        break;
    case TEXT:
        return "TEXT";
        break;
    case TABLEAU:
        return "TABLEAU";
        break;
    case STRUCTURE:
        return "STRUCTURE";
        break;
    default:
        return "N/A";
        break;
    }
}

TableStructures* initialisationTableStructures()
{
    TableStructures* tableId = malloc(sizeof(TableStructures));
 Structure* strcture = malloc(sizeof(Structure));

    if (tableId == NULL || strcture == NULL)
    {
        exit(EXIT_FAILURE);
    }

    tableId->tete = NULL;


    return tableId;
}

Structure* declarerStructure(TableStructures* table, char* nom){
    Structure* structure = malloc(sizeof(Structure));

    structure->nom = strdup(nom);
    structure->tableLocale = initialisation();
    structure->champSuivant = NULL;

    structure->suivant = table->tete;

    return structure;
}

Structure* rechercherStructure(TableStructures* table, char* nom) {
    Structure* iterateur = table->tete;

    while (iterateur != NULL)
    {
        if (strcmp(iterateur->nom, nom) == 0)
        {
            return iterateur;
        }
        
        iterateur = iterateur->suivant;
    }
    
    return NULL;
}

void linkChampsDeStructure(Structure* myStrct, BufferLLC* buffer) {
   myStrct->champSuivant = buffer->tete; 
}

//Parametre taille n'a un sense que lorque le type est TABLEAU
int declarerChampsDeVariableDeTypeStructure(TableIds* table,Structure* structure, char * nomVariable) {
    struct Champ* iterateur = structure->champSuivant;

    char * nomConcatene1 = strcat(strdup(nomVariable), ":");
    char * nomConcatene2 = NULL;


    while (iterateur != NULL) {
        //On concatene le nom pour le sauvegarde de cette forme: "nom_struct:nom_champ"
        nomConcatene2 = strcat(strdup(nomConcatene1), iterateur->nom);

        if (iterateur->type != TABLEAU && iterateur->type!=STRUCTURE){
            table->Entete_llc = declarerVar(table, nomConcatene2, iterateur->type, PRIMITIF);
        }
        else if (iterateur->type == TABLEAU){
            table->Entete_llc = declarerTab(table, nomConcatene2, iterateur->type, iterateur->taille);
        } 

        iterateur = iterateur->champSuivant;
    }
    return 1;
}

BufferLLC* initialisationBuffer(){
    BufferLLC* buffer = malloc(sizeof(BufferLLC));
    buffer->tete = NULL;

    return buffer;
}
//Parametre taille n'a un sense que lorque le type est TABLEAU, mais il DOIT être passé
struct Champ* sauvegarderVariable(BufferLLC *buffer, char* nom, typePossible type, int taille){

    struct Champ* variable = malloc(sizeof(struct Champ));
    variable->nom = strdup(nom);
    variable->type = type;
    variable->taille = taille;
    variable->champSuivant = buffer->tete;

    return variable;
}


void afficher(char table[100][4][25], int index){
    printf("\n\t la matrice des quadruplets \n\n");
    for (int i = 0; i < index; i++)
    {
        printf("%d \t[%s] [%s] [%s] [%s]\n",i,table[i][0],table[i][1],table[i][2],table[i][3]);
        
    }
    
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

