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

    int i;
    float avg=0,sum=0,a;

    for(i=1;i<=n;i++)
    {
        do
        {
            printf("\na=");
            scanf("%f", &a);

        }while(a<2 || a>6);

        sum+=a;
    }
    avg=sum/n;

    printf("\navg=%.2f", avg);
    return 0;
}
