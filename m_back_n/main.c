#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    do
    {
        printf("\nn=");
        scanf("%d", &n);

    }while(n<1);

    int m=0;

    while(n>0)
    {
        m=m*10+n%10;
        n/=10;
    }

    printf("\nm=%d", m);
    return 0;
}
