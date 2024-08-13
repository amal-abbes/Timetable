#include <stdio.h>
#include"heure.h"
heure saisirHeure()
{
 heure h ;
 { do{
    printf("l_heure est  ");
    scanf(" %d",&h.heure);
    } while ((h.heure<8) &&(h.heure<17));
}
{do {
    printf("la minute est ");
    scanf("%d",&h.minute);
    } while ((h.minute<00)&&(h.minute>60));

}
return h;
}
void afficherHeure(heure h)
 {
     printf("l_heure est %d:%d",h.heure,h.minute);
 }
