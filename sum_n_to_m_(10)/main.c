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

    int sum=0,i;

    for(i=n;i<=m;i++)
    {
        sum+=i;
    }

    printf("\nsum=%d", sum);
    return 0;
}
