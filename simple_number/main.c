#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    do
    {
        printf("\nn=");
        scanf("%d", &n);

    }while(n<2);

    int i=2;

    while(n%i!=0)
    {
        i++;
    }

    if(i==n)
    {
        printf("\n%d is simple number", n);
    }

    else
    {
        printf("\n%d isn't simple number", n);
    }

    return 0;
}
