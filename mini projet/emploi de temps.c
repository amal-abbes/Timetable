#include<stdio.h>
#include"enseignant.h"
#include"departement.h"
#include"date.h"
#include"matiere.h"
#include"heure.h"
#include"classe.h"
#include"salle.h"
#include "emploi de temps.h"

emploidetemps saisiremploi ()
{
    FILE *ge;
int i=0;
int j,m,a; char mat[20]; int hd,md,hf,mf; char nom[64], prenom[64];char emp[27];int etage;char cors[6];
ge=fopen("creneau.txt","r");
emploidetemps ge1;
while(!feof(ge)){
    fscanf(ge,"%d %d %d %s %d %d %d %d %s %s %s %d %s",&j,&m,&a,mat,&hd,&md,&hf,&mf,nom,prenom,emp,&etage,cors);
    ge1.edt[i].d.jour=j;
    ge1.edt[i].d.mois=m;
    ge1.edt[i].d.annee=a;
    strcpy(ge1.edt[i].j[i].matiere.identifiant,mat);
    ge1.edt[i].j[i].debut.heure=hd;
    ge1.edt[i].j[i].debut.minute=md;
    ge1.edt[i].j[i].fin.heure=hf;
    ge1.edt[i].j[i].fin.minute=mf;
    strcpy(ge1.edt[i].j[i].c.refclasse,"1age1");
    strcpy(ge1.edt[i].j[i].e.nom,nom);
    strcpy(ge1.edt[i].j[i].e.prenom,prenom);
    ge1.edt[i].j[i].s.em=e_tour;
    ge1.edt[i].j[i].s.etage=etage;
    ge1.edt[i].j[i].t=cours;
    i++;
}
return ge1;

}


void afficheemploi (emploidetemps ge1) {
    int k=0;
    int i=0;
    for(k;k<i;k++)
{
    printf("%d ",ge1.edt[k].d.jour);
    printf("%d ",ge1.edt[k].d.mois);
    printf("%d ",ge1.edt[k].d.annee);
    printf("%d ",ge1.edt[k].j[k].debut.heure);
    printf("%d ",ge1.edt[k].j[k].debut.minute);

}
    return 0;
}













