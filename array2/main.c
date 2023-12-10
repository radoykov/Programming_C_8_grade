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

    int sym = 1;

    for(int i=0; i<b/2; i++)
    {
       if(a[i] != a[b-1-i])
       {
            sym = 0;
            break;
       }
    }

    if(sym)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}


