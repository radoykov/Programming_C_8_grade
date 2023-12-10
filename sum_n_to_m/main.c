#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;

    do
    {
        printf("\nn=");
        scanf("%d", &n);
        printf("\nm=");
        scanf("%d", &m);

    }while(n>m);

    int sum=0;

    while(n<=m)
    {
        sum+=++n;
    }


    printf("\nsum=%d", sum);
    return 0;
}
