#include <stdio.h>

int main(void) {
    char c;

    printf("Entrez un caractère : ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
        printf("%c est une lettre minuscule", c);
    } else if (c >= 'A' && c <= 'Z') {
        printf("%c est une lettre majuscule", c);
    } else if (c >= '0' && c <= '9') {
        printf("%c est un chiffre", c);
    } else {
        printf("Le caractère saisi n'est ni une lettre, ni un chiffre");
    }

    return 0;
}
