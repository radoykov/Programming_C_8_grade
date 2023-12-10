#include <stdio.h>
#include <stdlib.h>
#define n 10

int main()
{
    float temps[n], sum, avg;
    int i;

    for(i=0;i<n;i++)
    {
            printf("\ntemperature %d = ", i+1);
            scanf("%f", &temps[i]);
    }

    for(i=0;i<n;i++)
    {
        sum+=temps[i];
    }

    avg=sum/n;

    printf("\navg=%.1f", avg);

    for(i=0;i<n;i++)
    {
        printf("\ndelta %d = %.1f", i+1, temps[i]-avg);
    }

    return 0;
}
