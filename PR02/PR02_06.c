#include <stdio.h>

int main(void)
{
    // Déclaration de variables
    char nom[] = "Dupont";
    char prenom[] = "Jean";
    int jour = 25;
    int mois = 3;
    int annee = 1999;

    // Code
    printf("*******************************************************************************\n\n");
    printf("                Nom                     : %s\n", nom);
    printf("                Prénom                  : %s\n", prenom);
    printf("                Date de naissance       : %d/%d/%d\n", jour, mois, annee);
    printf("\n*******************************************************************************");

    // Fin du programme
    return 0;
}
