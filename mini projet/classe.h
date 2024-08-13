#ifndef CLASSE_H_INCLUDED
#define CLASSE_H_INCLUDED

#include"etudiant.h"
typedef struct classe {
char refclasse[5];
etudiant tab[30];
int nbrE;
int etat;
}classe;
 classe saisirclasse();
 void ajouteretudiant(classe *c,etudiant e);
 void afficheclasse(classe c);


#endif // CLASSE_H_INCLUDED
