#include<stdio.h>
#include"date.h"
date saisirdate()
{


 date d;
 do {
    printf("donner l_annee ");
    scanf("%d",&d.annee);

 }while ((d.annee!=2018)&& (d.annee!=2019));
 do {
    printf("donner le mois");
    scanf("%d",&d.mois);
 }while ((d.mois<1)&&(d.mois>12));
 do {
    printf("donner le jour ");
    scanf("%d",&d.jour);

 }while ((d.jour<1)&&(d.jour>31));
 return d;
 }


 void afficherdate(date d)
 {


  printf("la date est %d/%d/%d", d.jour,d.mois,d.annee);
 }

