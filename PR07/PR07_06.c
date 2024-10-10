#include <stdio.h>
#include <time.h>    // Pour la fonction « time() »
#include <stdlib.h>  // Pour « rand() » et pour « srand() »

int main(void)
{
    srand(time(NULL));

    int a = rand()%20+1, b = rand()%21-5;
    double formule = (double) 3*a - (b-a)/2 + b/a;

    printf("a = %d\nb = %d\n3*a - (b-a)/2 + b/a = %lf", a, b, formule);

    return 0;
}
