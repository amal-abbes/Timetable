#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED

typedef struct etudiant {
int CIN;
char nom[10];
char prenom[10];
}etudiant;

etudiant saisiretudiant();
void afficheretudiant(etudiant E);

#endif // ETUDIANT_H_INCLUDED
