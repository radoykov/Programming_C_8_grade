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
    int c, index;

    for(int i=0; i<b; i++)
    {
        c=a[i];
        index=i;

        for(int j=i+1; j<b; j++)
        {
            if(a[j]<c)
            {
                c=a[j];
                index=j;
            }
        }
        a[index]=a[i];
        a[i]=c;
    }

    for(int i=0; i<b; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
