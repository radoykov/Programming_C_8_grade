#include <stdio.h>
#include <stdlib.h>
#define n 100

int main()
{
    int a[n], b;

    do
    {
        printf("\nb=");
        scanf("%d", &b);

    }while(b<1 || b>n);

    for(int i=0; i<b; i++)
    {
        printf("\nnumber=");
        scanf("%d", &a[i]);
    }

    int c;

    for(int i=0; i<b/2; i++)
    {
       c = a[i];
       a[i] = a[b-1-i];
       a[b-1-i] = c;
    }

    for(int i=0; i<b; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
