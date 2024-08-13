#ifndef EMPLOI_DE_TEMPS_H_INCLUDED
#define EMPLOI_DE_TEMPS_H_INCLUDED
#include"enseignant.h"
#include"matiere.h"
#include"heure.h"
#include"classe.h"
#include"salle.h"
#include"date.h"
#include"departement.h"
#include "jour.h"
typedef struct emploidetemps{
  jour edt[6];

}emploidetemps;
emploidetemps saisiremploi ();
void afficheemploi (emploidetemps emp);







#endif // EMPLOI_DE_TEMPS_H_INCLUDED
