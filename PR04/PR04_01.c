#include <stdio.h>

int main(void) {

    const double g = 9.81;

    printf("Saisissez la valeur de l'acceleration de la pesanteur : ");
    scanf("%lf", &g);

    printf("%lf", g);
    return 0;
}
