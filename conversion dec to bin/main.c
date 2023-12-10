#include <stdio.h>
#include <stdlib.h>

int a(int n, int *pc)
{
    int i=0;
    do
    {
        pc[i]=n%2;
        n=n/2;
        i++;

    }while(n!=0);

    return i;
}

void b(int n)
{
    if(n>0)
    {
        b(n/2);
        printf("%d", n%2);
    }
}

void main()
{
    int n, c[100], len;

    printf("\nn=");
    scanf("%d", &n);

    len=a(n, &c);
    for(int i=len-1; i>=0; i--)
    {
        printf("%d", c[i]);
    }

    //b(n);
}
