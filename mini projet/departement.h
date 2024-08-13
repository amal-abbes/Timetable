#ifndef DEPARTEMENT_H_INCLUDED
#define DEPARTEMENT_H_INCLUDED
typedef enum nom{electrique,mecanique,minds,industriel, tic,technique_avance,hydraulique, civil} nom ;

typedef struct departement {
nom nom ;
enseignant t[20];
int n;
} departement;
departement saisirdepart();
void affichedepart();
void afficher_enseignant_par_disponibilite();



#endif // DEPARTEMENT_H_INCLUDED
