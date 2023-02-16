#include <stdio.h>
int main(void)
{
    int i;

    struct Mois
    {
        int nbjours;
        char nom[3];
    };
    struct Mois mois[12] = {
        {31, {'J', 'A', 'N'}},
        {28, {'F', 'E', 'B'}},
        {31, {'M', 'A', 'R'}},
        {30, {'A', 'V', 'R'}},
        {31, {'M', 'A', 'Y'}},
        {30, {'J', 'U', 'N'}},
        {31, {'J', 'U', 'I'}},
        {31, {'A', 'O', 'U'}},
        {30, {'S', 'E', 'P'}},
        {31, {'O', 'C', 'T'}},
        {30, {'N', 'O', 'V'}},
        {31, {'D', 'E', 'C'}},
    };

    printf(" mois     Nombre de jours\n ");
    printf("-----     --------------\n ");
    for (i = 0; i < 12; ++i)
        printf(" %c%c%c           % i\n ",
               mois[i].nom[0],
               mois[i].nom[1],
               mois[i].nom[2],
               mois[i].nbjours);
    return 0;
}
