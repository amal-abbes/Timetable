#include<stdio.h>
#include"enseignant.h"
#include"departement.h"
#include"date.h"

//tableau d'enseignant
departement saisirdepart()
{
departement d;
printf("donner le nom de departement  0:electrique 1:mecanique 2:minds 3:industriel 4:tic  5:technique_avance,6:hydraulique,7:civil ");
scanf("%s",d.nom);
printf("donner le nombre des enseignants");
scanf("%d",&d.n);
return d ;
}
void affichedepart(departement d)
{
 printf("le nom de departement est %s:",d.nom);
 printf("donner le nombre des etudiants %d",d.n);
}

void afficher_enseignant_par_disponibilite(enseignant e)
{
    if (e.etat == 0)
    {
        afficherenseignant(e);
    }





}


