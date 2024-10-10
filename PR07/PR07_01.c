#include <stdio.h>
#include <time.h>    // Pour la fonction « time() »
#include <stdlib.h>  // Pour « rand() » et pour « srand() »

int main(void)
{
    srand(time(NULL));

    int n1, n2, n3, total;

    n1 = rand();
    n2 = rand();
    n3 = rand();

    printf("%d, %d, %d\n", n1, n2, n3);

    total = n1 + n2 + n3;

    printf("%d + %d + %d = %d", n1, n2, n3, total);
    return 0;
}
