#include <stdio.h>
#include <string.h>
struct date
{
    int mois;
    int jour;
    int annee;
};
struct Universite
{
    char univ_name[20];
    int rang;
    struct date date_creation;
};

struct Etudiant
{
    int id_etudiant;
    char nom[20];
    int niveu_anne;
    struct date date_naissance;
    float moyenne;
    struct Universite univ;
};

// Driver code
int main()
{
    struct Universite univ1 = {
        {'F', 'S', 'B'},
        10,
        {10, 11, 1980}};

    struct Etudiant Etudiant1 = {
        11330,
        {'A', 'H', 'M', 'E', 'D'},
        1,
        {10, 3, 2002},
        11.37,
        univ1};

    struct date date_uni2 = {5, 5, 2005};

    struct Etudiant Etudiant2 = {
        12830,
        {'A', 'N', 'I', 'S', 'S', 'A'},
        2,
        {9, 10, 2001},
        12.47,
        {{'I', 'S', 'E', 'T'},
         22,
         date_uni2}};

    printf("les info du premier etudiant : \n");
    printf("id: %i\n", Etudiant1.id_etudiant);
    printf("nom: %c%c%c%c%c\n", Etudiant1.nom[0], Etudiant1.nom[1], Etudiant1.nom[2], Etudiant1.nom[3], Etudiant1.nom[4]);
    printf("Anne universitaire: %i\n", Etudiant1.niveu_anne);
    printf("date de naissance: %i/%i/%i\n", Etudiant1.date_naissance.jour, Etudiant1.date_naissance.mois, Etudiant1.date_naissance.annee);
    printf("moyenne de l'etudiant: %.2f\n", Etudiant1.moyenne);
    printf("nom de l'universite: %c%c%c\n", univ1.univ_name[0], univ1.univ_name[1], univ1.univ_name[2]);
    printf("rang de l'universite: %i\n", univ1.rang);
    printf("date de creation de l'universite %i/%i/%i\n", univ1.date_creation.jour, univ1.date_creation.mois, univ1.date_creation.annee);

    printf("\nles info du deuxiemme etudiant : \n");
    printf("id: %i\n", Etudiant2.id_etudiant);
    printf("nom: %c%c%c%c%c%c\n", Etudiant2.nom[0], Etudiant2.nom[1], Etudiant2.nom[2], Etudiant2.nom[3], Etudiant2.nom[4], Etudiant2.nom[5]);
    printf("Anne universitaire: %i\n", Etudiant2.niveu_anne);
    printf("date de naissance: %i/%i/%i\n", Etudiant2.date_naissance.jour, Etudiant2.date_naissance.mois, Etudiant2.date_naissance.annee);
    printf("moyenne de l'etudiant: %.2f\n", Etudiant2.moyenne);
    printf("nom de l'universite: %c%c%c%c\n", Etudiant2.univ.univ_name[0], Etudiant2.univ.univ_name[1], Etudiant2.univ.univ_name[2], Etudiant2.univ.univ_name[3]);
    printf("rang de l'universite: %i\n", Etudiant2.univ.rang);
    printf("date de creation de l'universite %i/%i/%i\n", date_uni2.jour, date_uni2.mois, date_uni2.annee);

        return 0;
}