#include <stdio.h>
#include <stdlib.h>

int i=-1;

void main()
{
    int a, c[100];

    do
    {
        printf("\nlong=");
        scanf("%d", &a);

    }while(a<1);

    arr(&c, a);
}

void arr(int *pc, int l)
{
    if(l>0)
    {
        i++;
        printf("\nnumber=");
        scanf("%d", &pc[i]);

        arr(pc, l-1);
    }
}
