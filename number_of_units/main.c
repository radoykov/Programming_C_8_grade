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

    int i=0;

    while(n>0)
    {
        if(n%2!=0) i++;
        n/=2;
    }

    printf("\ni=%d", i);
    return 0;
}
