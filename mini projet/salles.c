#include<stdio.h>
#include"salles.h"
salles saisirsalles()
{
    int nbrs = 50 ;
    salles ss;
    ss.nbrs=nbrs;
    int i;
    for(i=0;i<ss.nbrs;i++)
    {
        ss.tab[i]=saisirsalle();

    }
    return ss;
}

void affichesalles(salles ss)
{
    int i;
    for(i=0;i<ss.nbrs;i++)
    {   if (ss.tab[i].etat==0)
        affichersalle(ss.tab[i]);

    }
}
