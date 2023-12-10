#include <stdio.h>
#include <stdlib.h>
#define n 100

int main()
{
     int a[n], b, c;

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
     printf("\nc=");
     scanf("%d", &c);

    int ok=0;

    for(int i=0; i<b; i++)
    {
        if(a[i] == c)ok=1;
    }

    if(ok)printf("Yes");

    else printf("No");

    return 0;
}
