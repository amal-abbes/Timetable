#include<stdio.h>
#include"creneau.h"
#include"matiere.h"
#include"salle.h"
#include"enseignant.h"
#include"classe.h"
#include"date.h"
#include"heure.h"
#include"departement.h"
//une creneau est une seance qu'elle a comme caractéristique la matiere,l'heure de debut, l'heure de fin, la classe et l'enseignant de cette matiere
creneau saisircreneau()
{
  creneau cre ;
printf("donner la matiere");
cre.matiere= saisirmatiere();
printf("donner l_heure de debut");
cre.debut= saisirHeure();
printf("donner l_heure de fin");
cre.fin=saisirHeure();
printf("donner la classe");
cre.c= saisirclasse();
return cre;

}
void affichecreneau(creneau cre)

{   enseignant e;
    printf("l_heure de debut de seance est: \t") ;
    afficherHeure(cre.debut);
    printf("la matiere est : \t ");
    affichermatiere(cre.matiere);
    printf("la classe est: \t ");
    afficheclasse(cre.c);
    printf("l_enseignant de cette seance est : \t");
    if (afficher_enseignant_par_disponibilite(e))
      { afficherenseignant(e); }
    printf("la salle de cette seance est : \t");
    affichersalle(cre.c);
    printf("la seance est de type: \t");
    printf("l_heure de fin de cette seance est : \t");
    afficherHeure(cre.fin);
}



