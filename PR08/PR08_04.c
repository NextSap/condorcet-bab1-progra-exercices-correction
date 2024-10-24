#include <stdio.h>

int main(void) {
    int nbr;

    printf("Entrez un entier : ");
    scanf("%d", &nbr);

    if (nbr >= 25 && nbr <= 40) {
        printf("Le nombre saisi est compris entre 25 et 40");
    } else {
        printf("Le nombre saisi N'est PAS compris entre les bornes");
    }
}
