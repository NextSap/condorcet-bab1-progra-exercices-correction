#include <stdio.h>
#include <time.h>    // Pour la fonction « time() »
#include <stdlib.h>  // Pour « rand() » et pour « srand() »

int main(void)
{
    srand(time(NULL));

    int n1, n2, n3, total;

    n1 = rand()%88-12;
    n2 = rand()%88-12;
    n3 = rand()%88-12;

    printf("%d, %d, %d\n", n1, n2, n3);

    total = n1 + n2 + n3;

    printf("%d + %d + %d = %d", n1, n2, n3, total);

    return 0;
}
