#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    for(n=0; n<=255; n++)
    {
        printf("\n%c %c %d", n, 26, n);
    }

    return 0;
}
