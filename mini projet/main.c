#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "date.h"
#include "etudiant.h"
#include "classe.h"
#include "emploi de temps.h"
#include "heure.h"
#include "enseignant.h"
#include "matiere.h"
#include "salle.h"
#include "creneau.h"
#include "classes.h"
#include"jour.h"
#include"salles.h"


void main()
{
int choix; etudiant e; enseignant En; matiere m; classes cs; creneau cre; jour j; emploidetemps empl; classe c;


while(1)
    {
printf("\n\n******************************");
printf("\n******* Menu aux choix *******");
printf("\n******************************\n\n");

printf("------------------------------------ \n ");
printf("| 1. gestion etudiant                \n ");
printf("| 2. gestion enseignant              \n ");
printf("| 3. gestion classes                 \n ");
printf("| 4. gestion creneaux                \n ");
printf("| 5. Affichage jour                  \n ");
printf("| 6. gestion emploi                  \n ");
printf("| 7. Quitter                         \n ");

 do
{
    printf("saisir votre choix");
    scanf("%d", &choix );
}
while ((choix<0)&&(choix>7)) ;
switch (choix) {
    case 1 :
        { e = saisiretudiant();
          afficheretudiant(e);
        }; break;
    case 2 :
        {
            En=saisirenseignant();
            afficherenseignant( En);
            ajoutermatiere(&En ,m );
            modif_enseignant(&En);

        }; break ;
case 3 :
        {
           cs=saisirclasses();
           ajouterclasse( &cs, c );
           afficheclasses(cs );
        }; break ;
case 4 :
    {
        cre=saisircreneau();
        affichecreneau(cre);
    }; break ;
case 5 :
    {
        j=saisirjour();
        afficherjour(j);

    } ; break ;
case 6 :
    {
        empl= saisiremploi();
        afficheemploi(empl);
    };break;
case 7 :
    {
        break ;
    }
}
}
}
