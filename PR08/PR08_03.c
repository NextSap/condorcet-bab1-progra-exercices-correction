#include <stdio.h>

int main(void) {
    int nbr;

    printf("Entrez un entier : ");
    scanf("%d", &nbr);

    if (nbr % 2 == 0) {
        printf("Le nombre saisi est pair");
    } else {
        printf("Le nombre saisi est impair");
    }
}
