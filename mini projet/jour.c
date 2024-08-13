#ifndef JOUR_C_INCLUDED
#define JOUR_C_INCLUDED
jour saisirjour();
{
    jour je;
    int i;
    for(i=0;i<4;i++)
    {
        d=saisirdate();
        je[i]=saisircreneau();
    }
    return j;

}
jour ajoutercreneau(jour *je,creneau ce);
 {   d=saisirdate();
     je->j[je->nbrc]=ce;
     je->nbrc++;
     return je;
 }
void afficherjour(jour je)
{
    int i;
    for(i=0;i<je.nbrc;i++)
    {
        afficherdate(d)
        affichercreneau(je.j[i]);


}




#endif // JOUR_C_INCLUDED
