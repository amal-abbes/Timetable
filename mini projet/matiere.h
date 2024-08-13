#ifndef MATIERE_H_INCLUDED
#define MATIERE_H_INCLUDED
#include <string.h>
typedef struct matiere {
int coefficient ;
char identifiant[20];
int nbr_heure ;
}matiere;
 matiere saisirmatiere();
 void affichermatiere();



#endif // MATIERE_H_INCLUDED
