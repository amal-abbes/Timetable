#include<stdio.h>
#include"enseignant.h"
#include"matiere.h"
enseignant saisirenseignant()
 {   enseignant EN;
     matiere m ; int choix;
            printf("donner la CIN");
            scanf("%s",EN.CIN);

            printf("donner le nom de l_enseignant");
            scanf("%s",EN.nom);

            printf("donner le prenom de l_enseignant");
            scanf("%s",EN.prenom);

            printf("donner le nombre de matiere de l_enseignant");
            scanf("%d",&EN.nbrmat);

            printf("donner la charge horaire de l_enseignant");
            scanf("%d",&EN.chargeHoraire);
            do{
             m = saisirmatiere();
             ajoutermatiere(&EN,m);
                printf("voulez vous ajouter une matiere(0:oui 1:non)");
                scanf("%d",&choix);
           } while (choix==0);
           printf("donner l_etat de l'enseignant (0:libre 1:non libre)");
           scanf("%d",&EN.etat);
           return EN;
}
 void afficherenseignant( enseignant EN)
 {

     printf("le nom de l_enseignant est %s:",EN.nom);
     printf ("le prenom de l_enseignant est %s:",EN.prenom);
     printf("le cin de l_enseignant est %s:", EN.CIN);

 }
 void ajoutermatiere(enseignant *EN,matiere m )
 {
    EN->matieres[EN->nbrmat]=m;
    EN->nbrmat++;
 }

  //modif enseignant

 void modif_enseignant( enseignant *EN)
 {
int p ;
printf("1 : modifier le nom \n 2: modifier le prenom \n 3:modifier etat \n 4: modifier cin \n 5: modifier nombre de matiere \n");
printf("choisir un nombre");
scanf("%d",&p);
switch(p)
{
case 1 : {printf("donner un nouveau nom"); scanf("%s",EN->nom);}; break;
case 2 : {printf("donner un nouveau prenom"); scanf("%s",EN->prenom);}; break;
case 3 : {printf("donner le nouveau etat"); scanf("%d",EN->etat);} ;break;
case 4 : {printf("donner le nouveau cin"); scanf("%s",EN->CIN);}; break;
case 5 : {printf("donner le nouveau nbr de matiere"); scanf("%d",EN->nbrmat);}; break;
}

}




