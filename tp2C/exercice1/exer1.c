#include <stdio.h>

struct date
{
    int mois;
    int jour;
    int annee;
};

int calculAnneee(int annee, int mois)
{
    return annee = (mois <= 2) ? (annee - 1) : annee;
}
int calculMois(int mois)
{
    return mois = (mois <= 2) ? (mois + 13) : (mois + 1);
}

float calculJour(struct date date)
{
    float n;
    n = ((1461 * calculAnneee(date.annee, date.mois)) / 4) + ((153 * calculMois(date.mois)) / 5) + date.jour;
    return n;
}

int main(void)
{
    struct date premiereDate, deuxiemmeDate;
    int days;

    printf("Entrez la premiere date superieure a 1er mars 1900 avec le format (jj mm aaaa) :");
    scanf("%i%i%i", &premiereDate.jour, &premiereDate.mois, &premiereDate.annee);
    printf("Vous avez entrer comme premiere date %i/%i/%i \n", premiereDate.jour, premiereDate.mois, premiereDate.annee);

    printf("Entrez la deuxiemme date superieure a 1er mars 1900 avec le format (jj mm aaaa) :");
    scanf("%i%i%i", &deuxiemmeDate.jour, &deuxiemmeDate.mois, &deuxiemmeDate.annee);
    printf("Vous avez entrer comme deuxiemme date %i/%i/%i \n", deuxiemmeDate.jour, deuxiemmeDate.mois, deuxiemmeDate.annee);

    days = calculJour(deuxiemmeDate) - calculJour(premiereDate);
    printf("nombres de jours entre les deux dates est :   %d \n ", days);
    return 0;
}