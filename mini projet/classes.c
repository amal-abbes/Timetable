#include<stdio.h>
#include"classes.h"
//la structure classes est un tableau de classe
void ajouterclasse(classes *cs,classe c)
{
    cs->tab[cs->nbrc]=c;
    cs->nbrc++;
}
classes saisirclasses()//la saisie d'une classes à partir des classes

{
    classes cs;
    int i;
    for(i=0;i<cs.nbrc;i++)
    {
        cs.tab[i]=saisirclasse();
        ajouterclasse(&cs,cs.tab[i]);
    }
    return cs;
}

void afficheclasses(classes cs)//l'affichage du tableau de classe
{
    int i;
    for(i=0;i<cs.nbrc;i++)
    {
        afficheclasse(cs.tab[i]);
    }
}

