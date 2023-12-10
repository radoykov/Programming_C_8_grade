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

    int a=1,b=1,c=1;

    while(c<=n)
    {
        c=a+b;
        a=b;
        b=c;
    }

    printf("\na=%d", a);
    return 0;
}
