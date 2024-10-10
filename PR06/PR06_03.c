#include <stdio.h>

int main(void)
{
    int centimetres;
    double metres;

    printf("Entrer une valeur en centimètres : ");
    scanf("%d", &centimetres);

    metres = (double) centimetres / 100;

    printf("%lf", metres);
    return 0;
}
