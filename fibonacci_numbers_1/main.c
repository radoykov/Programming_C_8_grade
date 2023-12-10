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

    int a=1,b=1,c=1,i=2;

    for(;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }

    printf("\nc=%d", c);
    return 0;
}
