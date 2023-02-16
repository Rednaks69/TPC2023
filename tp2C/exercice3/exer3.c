#include <stdio.h>

struct date
{
    int mois;
    int jour;
    int annee;
};

struct date jourConvertion(int jour);

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
    int jours;

    printf("Entrez la premiere date superieure a 1er mars 1900 avec le format (jj mm aaaa) :");
    scanf("%i%i%i", &premiereDate.jour, &premiereDate.mois, &premiereDate.annee);
    printf("Vous avez entrer comme premiere date %i/%i/%i \n", premiereDate.jour, premiereDate.mois, premiereDate.annee);

    printf("Entrez la deuxiemme date superieure a 1er mars 1900 avec le format (jj mm aaaa) :");
    scanf("%i%i%i", &deuxiemmeDate.jour, &deuxiemmeDate.mois, &deuxiemmeDate.annee);
    printf("Vous avez entrer comme deuxiemme date %i/%i/%i \n", deuxiemmeDate.jour, deuxiemmeDate.mois, deuxiemmeDate.annee);

    jours = calculJour(deuxiemmeDate) - calculJour(premiereDate);
    printf("nombres de jours entre les deux dates est :   %d \n ", jours);

    // convertion en annee, mois et jours

    printf("\napres la convertion\n");
    printf("-------------------\n");
    printf("nombres de annee entre les deux dates est :  %d \n", jourConvertion(jours).annee);
    printf("nombres de mois entre les deux dates est :   %d \n", jourConvertion(jours).mois);
    printf("nombres de jours entre les deux dates est :  %d \n", jourConvertion(jours).jour);

    return 0;
}
struct date jourConvertion(int jour)
{
    struct date jourConvertion;
    jourConvertion.annee = jour / 365;
    jourConvertion.mois = (jour - jourConvertion.annee * 365) / 30;
    jourConvertion.jour = (jour - jourConvertion.annee * 365 - jourConvertion.mois * 30);
    return jourConvertion;
}
