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

    int a=0;

    while(n>0)
    {
        n/=10;
        a++;
    }

    printf("\na=%d", a);
    return 0;
}
