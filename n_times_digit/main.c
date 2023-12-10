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

    int a;

    do
    {
        printf("\na=");
        scanf("%d", &a);

    }while(a>=10 || a<0);

    int i=0;

    while(n>0)
    {
        if(a==n%10) i++;
        n/=10;
    }

    printf("\ni=%d", i);
    return 0;
}
