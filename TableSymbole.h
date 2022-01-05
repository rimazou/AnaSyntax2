#ifndef FIC_H_INCLUDED
#define FIC_H_INCLUDED
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Maillon Maillon ;
struct Maillon{
char token[25];
char valeur[25];
Maillon* suivant ;
};

typedef struct TableSymbole TableSymbole ;
struct TableSymbole
{
   Maillon* Entete_llc;
};

/*------------------------les-prototypes-de-fonctions ---------------------------*/
TableSymbole* initialisation()
{
    TableSymbole* tableSymbole = malloc(sizeof(TableSymbole));
 Maillon* maillon = malloc(sizeof(Maillon));

    if (tableSymbole == NULL || maillon == NULL)
    {
        exit(EXIT_FAILURE);
    }

     strcpy((maillon->token),"");
   strcpy((maillon->valeur),"");
    maillon->suivant = NULL;
    tableSymbole->Entete_llc = maillon;


    return tableSymbole;
}

/*---------------------fonction pour allouer un  pointeur de type Maillon---------------*/
Maillon* allouer ()
{
    Maillon* p=NULL;
    p = malloc(sizeof(Maillon));
    if (p == NULL){exit(1);}
    return(p);
}


/*--------------------------remplir les champs d'une structure de type (Maillon)---------------------------------*/
void inital_champ ( Maillon* p,char token[],char valeur[])
{
   strcpy((p->token),token);
   strcpy((p->valeur),valeur);
   p->suivant=NULL;
}

/*----------------------- affecter une adresse dans le champs suivant de pointeur de type(Maillon)-------------*/
void aff_adr (Maillon*p,Maillon*q)
{
    p->suivant=q;
}

/*--------------longeur d'une liste chaine sa tete(p)--------------------------*/
int lg_llc(Maillon* p)
{
    int l=1;
    while(p->suivant!=NULL)
    {
        p=p->suivant;
        l++;
    }
    return(l);
}


/*---------------- Création de la table des symboles------------------------*/

void AjouterTable (Maillon* tete,char token[],char valeur[])
{
	Maillon* p;
Maillon* q;

	p=allouer();
	inital_champ ( p, token, valeur);
	if(tete == NULL){
		tete=p;
	}
	else{
	q=tete;
	while(q->suivant != NULL){

		q=q->suivant;
		}
	aff_adr(q,p);

	}

}

/*-------------- Afficher la table des symboles-----------------------------*/

void AfficherTable (Maillon* tete)
{
	Maillon* p;
	p=tete;

	while(p!=NULL){
		printf("Token :%s\n",p->token);
		printf("Valeur: %s\n",p->valeur);
		p=p->suivant;


	}

}

#endif // FIC_H_INCLUDED
