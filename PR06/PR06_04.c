#include <stdio.h>

int main(void)
{
    int a, b, division, reste;

    printf("Entrez a : ");
    scanf("%d", &a);
    printf("Entrez b : ");
    scanf("%d", &b);

    division = a/b;
    printf("%d\n", division);

    reste = a%b;
    printf("%d\n", reste);

    printf("%d = %d", division*b+reste, a);

    return 0;
}
