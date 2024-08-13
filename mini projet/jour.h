#ifndef JOUR_H_INCLUDED
#define JOUR_H_INCLUDED
#include "creneau.h"
#include "date.h"
typedef struct jour{
    creneau j[2];
    date d;
    int nbrc;
} jour;
jour saisirjour();
void afficherjour(jour je);
jour ajoutercreneau(jour *je,creneau ce);


#endif // JOUR_H_INCLUDED
