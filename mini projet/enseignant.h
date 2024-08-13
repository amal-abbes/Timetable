#ifndef ENSEIGNANT_H_INCLUDED
#define ENSEIGNANT_H_INCLUDED
#include"matiere.h"

typedef struct enseignant{
char nom[20];
char prenom[20];
int chargeHoraire;
char CIN[8];
matiere matieres[20];
int etat ;
int nbrmat;
}enseignant;
enseignant saisirenseignant();
void afficherenseignant(enseignant e);
void ajoutermatiere(enseignant *EN,matiere m );
void modif_enseignant( enseignant *EN);





#endif // ENSEIGNANT_H_INCLUDED
