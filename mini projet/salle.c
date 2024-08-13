#include<stdio.h>
#include<string.h>
#include "salle.h"
#include "enseignant.h"
#include "classe.h"
salle saisirsalle()
{
    salle s ; int emp;
    do
        {
          printf("donner le type de la salle");
          scanf("%s", s.type);

        }
    while (strcmp(s.type,"cours")&&strcmp(s.type,"tp")) ;
    do
    {
        printf("donner la capacite de la salle");
        scanf("%d", &s.capacite );

    }
    while ( s.capacite < 30 );

        printf("donner l_emplacement de la salle 0:TIC 1:electrique 2:industriel 3:mecanique 4:hydraulique 5:tour 6:civil ");
        scanf("%d",&emp );
    if(emp==5)
    {
    do {
        printf ("donner l_etage de la salle");
        scanf("%d",&s.etage);
    }
    while((s.etage<0)&&(s.etage>4));
    }
    s.etat=0;
return s ;
}

int verif_est_libre(salle s )
{
  enseignant d;
  classe c;
  s=saisirsalle();
  if (s.etat=0)
      {
        printf( "la salle est libre");
      }
  else {
  if (s.etat =1) {
     c=saisirclasse();
     d=saisirenseignant();
     afficherenseignant(d);
     afficheclasse(c); }
    }
return s.etat ;
}
void affichersalle(salle s)
{

    printf("la capacite de la salle est %d \t", s.capacite);
    printf("le type de la salle est %s \t",s.type);
    printf("l'emplacement de la salle est %d \t",s.em);
}

















