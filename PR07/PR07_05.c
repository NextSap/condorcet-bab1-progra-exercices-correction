#include <stdio.h>
#include <time.h>    // Pour la fonction « time() »
#include <stdlib.h>  // Pour « rand() » et pour « srand() »

int main(void)
{
    srand(time(NULL));

    int n1 = rand()%20000;
    double d = (double) (rand()%20000)/1000;

    printf("%d\n", n1);
    printf("%.3lf\n", d);

    return 0;
}
