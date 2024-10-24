#include <stdio.h>

int main(void) {
    int nbr;

    printf("Entrez un entier : ");
    scanf("%d", &nbr);

    if (nbr > 0) {
        printf("Le nombre saisi est positif");
    } else {
        if(nbr < 0) {
            printf("Le nombre saisi est négatif");
        } else {
            printf("Le nombre saisi est nul");
        }
    }
    return 0;
}
