#ifndef CRENEAU_H_INCLUDED
#define CRENEAU_H_INCLUDED
#include"matiere.h"
#include"heure.h"
#include"classe.h"
#include"enseignant.h"
#include"salle.h"
typedef enum type{td,tp,cours} type;
typedef struct creneau {
    matiere matiere;
    heure debut;
    heure fin;
    classe c;
    enseignant e;
    salle s;
    type t;
}creneau;
creneau saisircreneau();
void affichecreneau(creneau cre );




#endif // CRENEAU_H_INCLUDED
