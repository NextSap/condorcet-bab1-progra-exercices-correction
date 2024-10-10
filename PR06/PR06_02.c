#include <stdio.h>

int main(void)
{
    double metres;
    double centimetres;

    printf("Ecrire un valeur en mètre : ");
    scanf("%lf", &metres);

    centimetres = metres * 100;

    printf("%lf", centimetres);
    return 0;
}
