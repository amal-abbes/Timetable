#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include"classe.h"
typedef struct classes {
classe tab[27];
int nbrc;
}classes;
classes saisirclasses();
void ajouterclasse(classes *,classe );
void afficheclasses(classes );

















#endif // CLASSES_H_INCLUDED
