#include <stdio.h>

int main(void) {
    char signe;
    int nombre1, nombre2;

    printf("Entrez un signe (< ou >) : ");
    scanf("%c", &signe);
    printf("Entrez un premier entier : ");
    scanf("%d", &nombre1);
    printf("Entrez un deuxième entier : ");
    scanf("%d", &nombre2);

    if (signe == '<') {
        if(nombre1 < nombre2) {
            printf("%d\n%d", nombre1, nombre2);
        } else {
            printf("%d\n%d", nombre2, nombre1);
        }
    } else {
        if(nombre1 > nombre2) {
            printf("%d\n%d", nombre1, nombre2);
        } else {
            printf("%d\n%d", nombre2, nombre1);
        }
    }
}
