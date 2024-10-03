#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Entrez a et b :\n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d\n", a+=10);
    printf("%d\n", b-=10);
    a--;
    printf("%d\n", a);
    b++;
    printf("%d\n", b);
    return 0;
}
