#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,max;
    printf("\nn=");
    scanf("%d", &n);

    while(n<1)
    {
        printf("\nn=");
        scanf("%d", &n);
    }

    printf("\na=");
    scanf("%d", &a);
    max = a;
    int i = 1;

    while(n>i)
    {
         printf("\na=");
         scanf("%d", &a);

         if(a>max)
            max=a;
         i++;
    }

    printf("\nmax=%d", max);
    return 0;
}
