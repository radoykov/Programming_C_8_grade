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

    int min = a[0], max = a[0], max_index=0, min_index=0;

    for(int i=0; i<b; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            max_index=i;
        }

        if(a[i]<min)
        {
            min=a[i];
            min_index=i;
        }
    }
    a[max_index]=min;
    a[min_index]=max;

    for(int i=0; i<b; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
