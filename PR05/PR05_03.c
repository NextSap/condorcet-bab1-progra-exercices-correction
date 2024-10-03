#include <stdio.h>

int main(void) {

    // Déclaration des variables
    char name[20];
    char surname[20];
    int age;
    double size;
    double weight;

    // Saisies des informations du client
    printf("Saisie des informations\n");
    printf("-----------------------\n");
    printf("Veuillez saisir votre nom           : ");
    fflush(stdin);
    scanf("%s", name);
    printf("Veuillez saisir votre prénom        : ");
    fflush(stdin);
    scanf("%s", surname);
    printf("Veuillez saisir votre âge           : ");
    scanf("%d", &age);
    printf("Veuillez saisir votre taille (en m) : ");
    scanf("%lf", &size);
    printf("Veuillez saisir votre poids (en kg) : ");
    scanf("%lf", &weight);

    // Affichage d'une ligne séparatrice
    printf("\n\n-------------------------------------------------------------------------------\n\n\n");

    // Affichage d'un message de bienvenue
    printf("Bienvenue %s %s\n\n", surname, name);
    printf("*******************************************************************************\n");
    printf("*                                                                             *\n");
    // Affichage des informations du client
    printf("*     Information du client                                                   *\n");
    printf("*     ----------------------                                                  *\n");
    printf("*     Nom     : %-20s                                          *\n", name);
    printf("*     Prénom  : %-20s                                          *\n", surname);
    printf("*     Âge     : %-3d ans                                                       *\n", age);
    printf("*     Taille  : %-3.2lfm                                                         *\n", size);
    printf("*     Poids   : %-4.1lfkg                                                        *\n", weight);
    printf("*                                                                             *\n");
    printf("*******************************************************************************\n");

    return 0;
}
