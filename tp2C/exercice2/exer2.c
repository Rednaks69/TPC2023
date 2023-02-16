#include <stdio.h>
#include <stdbool.h>
struct date
{
    int mois;
    int jour;
    int annee;
};

bool estBisextile(struct date d);
int nombresDeJours(struct date d);

int main(void)
{
    struct date aujourdhui, demain;
    printf("Entrez la date d'aujourdhui (jj mm aaaa): ");
    scanf("%i%i%i", &aujourdhui.jour, &aujourdhui.mois, &aujourdhui.annee);

    if (aujourdhui.jour > 31)
    {
        printf("\nla saisie de jour est errone\n");
        return 0;
    }

    if (aujourdhui.jour != nombresDeJours(aujourdhui))
    {
        // demain.jour = aujourdhui.jour + 1;
        // demain.mois = aujourdhui.mois;
        // demain.annee = aujourdhui.annee;

        // Littéraux composés (Compound Literals)
        demain = (struct date){aujourdhui.mois, aujourdhui.jour + 1, aujourdhui.annee};
    }
    else if (aujourdhui.mois == 12)
    {
        // fin d'annee
        // demain.jour = 1;
        // demain.mois = 1;
        // demain.annee = aujourdhui.annee + 1;

        // Littéraux composés (Compound Literals)
        demain = (struct date){1, 1, aujourdhui.annee + 1};
    }
    else
    {
        // fin de mois
        // demain.jour = 1;
        // demain.mois = aujourdhui.mois + 1;
        // demain.annee = aujourdhui.annee;

        // Littéraux composés (Compound Literals)
        demain = (struct date){aujourdhui.mois + 1, 1, aujourdhui.annee};
    }
    printf("la date de demain est  %i/%i/%.2i.\n", demain.jour, demain.mois, demain.annee % 100);
    return 0;
}

int nombresDeJours(struct date d)
{
    int jours;
    const int jourParMois[12] = {31,
                                 28,
                                 31,
                                 30,
                                 31,
                                 30,
                                 31,
                                 31,
                                 30,
                                 31,
                                 30,
                                 31};

    if (estBisextile(d) == true && d.mois == 2)
        jours = 29;
    else
        jours = jourParMois[d.mois - 1];
    return jours;
}

bool estBisextile(struct date d)
{
    bool bisextiles_signe;
    if ((d.annee % 4 == 0 && d.annee % 100 != 0) || d.annee % 400 == 0)
        bisextiles_signe = true;

    else
        bisextiles_signe = false;
    return bisextiles_signe;
}