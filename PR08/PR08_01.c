#include <stdio.h>

int main(void) {
    int nbr;

    printf("Entrez un entier : ");
    scanf("%d", &nbr);

    if (nbr > 0) {
        printf("Le nombre saisi est un positif");
    } else {
        printf("Le nombre saisi N'est PAS positif");
    }
    return 0;
}
