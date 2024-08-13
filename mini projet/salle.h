#ifndef SALLE_H_INCLUDED
#define SALLE_H_INCLUDED
typedef enum emplacement {e_tic,e_electrique,e_industriel,e_mecanique,e_hydraulique,e_tour,e_civil}emplacement;
typedef struct salle
{
char type[20];
int capacite ;
emplacement em;
int etage ;
int etat;
}salle;

salle saisirsalle();
int verif_est_libre(salle);
void affichersalle(salle s);





#endif // SALLE_H_INCLUDED
