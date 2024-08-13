#include<stdio.h>
#include"classe.h"
//la classe est un tableau d'etudiants
void ajouteretudiant(classe * c, etudiant e)//ajouter un etudiant à une classe donnée
{
    c->tab[c->nbrE]=e;
    c->nbrE++;
}

classe saisirclasse()//la saisie d'une classe à partir des etudiants
{
    classe c;
    etudiant e;
    int choix;
        printf("donner la reference de la classe %s:",c.refclasse);//la ref de la classe est comme 1age1 par exemple
        scanf("%s",c.refclasse);
        do{
        printf("h");
        e=saisiretudiant();
        printf("h");
        ajouteretudiant(&c,e);
                printf("voulez vous ajouter un etudiant (0:oui 1:non)");
                scanf("%d",&choix);
        } while (choix==0);
    return c;
}

void afficheclasse(classe c) //l'affichage d'une classe c'est l'affichage de la liste des etudiants de cette classe
{   int i;
    for(i=0;i<c.nbrE;i++)
    {
        afficheretudiant(c.tab[i]);

    }


}


