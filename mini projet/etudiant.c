#include <stdio.h>
#include "etudiant.h"
etudiant saisiretudiant()
    {
    etudiant E;
            printf("donner la CIN");
            scanf("%d",&E.CIN);

            printf("donner le nom de l_etudiant");
            scanf("%s",E.nom);

            printf("donner le prenom de l_etudiant");
            scanf("%s",E.prenom);
    return E;
        }
void afficheretudiant(etudiant E)
 {
     printf("le cin de l_etudiant est %d \t", E.CIN);
     printf("le nom de l_etudiant est %s  \t",E.nom);
     printf ("le prenom de l_etudiant est %s \t",E.prenom);
 }


     // modif etudiant

void modif_etudiant(etudiant * E)
 {
int p ;
printf("1: modifier le nom \n 2: modifier le prenom\n 3: modifier la cin \n ");
printf("donner votre choix");
scanf("%d",&p);
switch(p){
case 1 : {printf("donner le nouveau nom "); scanf("%s",E->nom);}; break ;
case 2 : {printf("donner le nouveau prenom");scanf("%s",E->prenom);}; break ;
case 3 : {printf("donner le nouveau CIN"); scanf("%d",E->CIN);}; break ;
}
 }



