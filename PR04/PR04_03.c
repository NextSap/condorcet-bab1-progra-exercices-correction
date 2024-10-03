#include <stdio.h>

int main(void)
{
    int a, b, calcul;

    printf("Entrez a et b :\n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("(a + b)^2 = %d\n", (a+b)*(a+b));
    calcul = a*a + 2*a*b + b*b;
    printf("a^2 + 2ab + b^2 = %d", calcul);

    return 0;
}
