#include <stdio.h>

int main(void) {

    char name[50];
    char surname[50];
    int age;
    double size;
    double weight;

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
    printf("\n\n-------------------------------------------------------------------------------\n\n\n");
    printf("Bienvenue %s %s\n\n", surname, name);
    printf("Information du client\n");
    printf("----------------------\n");
    printf("Nom     : %s\n", name);
    printf("Prénom  : %s\n", surname);
    printf("Âge     : %d\n", age);
    printf("Taille  : %lfm\n", size);
    printf("Poids   : %lfkg\n", weight);


    return 0;
}
