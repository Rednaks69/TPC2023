#include <stdio.h>

struct Employer
{
    int id;
    float salaireParheure;
    int nbheureTravail;
    float salaireTotal;
};

float CalculeSalaireTotal(struct Employer em)
{
    return em.salaireParheure * em.nbheureTravail;
}

float augmentationSalaire(struct Employer em)
{
    if (em.salaireTotal >= 12)
    {
        em.salaireTotal *= 1.5;
    }
    else if (em.salaireTotal >= 10)
    {
        em.salaireTotal *= 1.2;
    }
    return em.salaireTotal;
}

int main()

{
    struct Employer employer[8] = {{1, 10.75, 8, 0},
                                   {2, 9, 10, 0},
                                   {3, 11.25, 6, 0},
                                   {4, 8.70, 14, 0},
                                   {5, 12.75, 11, 0},
                                   {6, 9.55, 10, 0},
                                   {7, 12.45, 15, 0},
                                   {8, 18.72, 11, 0}

    };

    for (int i = 0; i < 4; i++)
    {
        employer[i].salaireTotal = CalculeSalaireTotal(employer[i]);
        if (employer[i].nbheureTravail >= 10)
        {
            employer[i].salaireTotal = augmentationSalaire(employer[i]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        printf("\nlemployer de l'id %d ", employer[i].id);
        printf("a un numbre heures de travail %d\n", employer[i].nbheureTravail);
        printf("le prix de l'heure de son travail est %.2f ", employer[i].salaireParheure);
        printf("et ca lui fait un total de  %.2f\n", employer[i].salaireTotal);
    }

    return 0;
}