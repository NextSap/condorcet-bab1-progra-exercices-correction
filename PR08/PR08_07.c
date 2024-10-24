#include <stdio.h>

int main(void) {
    double a;
    double b;

    printf("Entrez a : ");
    scanf("%lf", &a);

    if(a == 0) {
        printf("[ERREUR] a ne peut pas être 0");
        return 0;
    }

    printf("Entrez b : ");
    scanf("%lf", &b);

    printf("%lf", 3*a-((b-a)/2)+b/a);
    return 0;
}
