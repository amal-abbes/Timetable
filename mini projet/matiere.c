#include<stdio.h>
#include "matiere.h"
 matiere saisirmatiere()
 {
     matiere m;
     printf("donner le coefficient de la matiere");
     scanf ("%d", &m.coefficient);
     printf("donner l_identifiant de la matiere");
     scanf("%s", m.identifiant);
     printf(" donner le nombre d_heure de la matiere");
     scanf("%d",&m.nbr_heure);
return m ;
 }

  void affichermatiere(matiere m)
  {
      printf("le coefficient de la matiere est %d",m.coefficient) ;
      printf("l_identifiant de la matiere est %s", m.identifiant) ;
      printf ("le nombre d_heure de la matiere est %d",m.nbr_heure);
  }
