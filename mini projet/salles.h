#ifndef SALLES_H_INCLUDED
#define SALLES_H_INCLUDED
#include "salle.h"
typedef struct salles
{
    salle tab[50];
    int nbrs;

}salles;
salles saisirsalles();
void affichesalles(salles ss);








#endif // SALLES_H_INCLUDED
