#include <stdio.h>

int main(void)
{
    double a, b, c, somme;

    printf("Entrez a, b et c :\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    somme = a + b + c;

    printf("Somme : %lf\n", somme);
    printf("Somme - 20 : %lf", somme - 20);

    return 0;
}
