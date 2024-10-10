#include <stdio.h>

int main(void)
{
    int a, b;
    double formule;

    printf("Ecrivez a : ");
    scanf("%d", &a);
    printf("Ecrivez b : ");
    scanf("%d", &b);

    formule = (double) ((3*a) - ((b-a)/2) + (b/a));

    printf("%lf", formule);
    return 0;
}
