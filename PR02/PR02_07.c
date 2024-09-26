#include <stdio.h>

int main(void)
{
    // Déclaration de variables
    char nom1[] = "Dupont";
    char prenom1[] = "Jean";
    int jour1 = 25;
    int mois1 = 3;
    int annee1 = 1999;

    char nom2[] = "Vandentruc";
    char prenom2[] = "Marie";
    int jour2 = 30;
    int mois2 = 6;
    int annee2 = 1985;

    char nom3[] = "Dupond";
    char prenom3[] = "Pierre";
    int jour3 = 12;
    int mois3 = 5;
    int annee3 = 2005;

    // Code
    printf("*******************************************************************************\n\n");
    printf("                Nom                     : %s\n", nom1);
    printf("                Prénom                  : %s\n", prenom1);
    printf("                Date de naissance       : %d/%d/%d\n", jour1, mois1, annee1);
    printf("\n*******************************************************************************");
    printf("\n\n");
    printf("*******************************************************************************\n\n");
    printf("                Nom                     : %s\n", nom2);
    printf("                Prénom                  : %s\n", prenom2);
    printf("                Date de naissance       : %d/%d/%d\n", jour2, mois2, annee2);
    printf("\n*******************************************************************************");
    printf("\n\n");
    printf("*******************************************************************************\n\n");
    printf("                Nom                     : %s\n", nom3);
    printf("                Prénom                  : %s\n", prenom3);
    printf("                Date de naissance       : %d/%d/%d\n", jour3, mois3, annee3);
    printf("\n*******************************************************************************");

    // Fin du programme
    return 0;
}
