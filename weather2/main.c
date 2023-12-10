#include <stdio.h>
#include <stdlib.h>
#define n 400

int main()
{
    int days, i, count=0;
    float temps[n], k;

    do
    {
        printf("\ndays=");
        scanf("%d", &days);

    }while(days>n);

    for(i=0;i<days;i++)
    {
        printf("\ntemperature %d = ", i+1);
        scanf("%f", &temps[i]);
    }

    printf("\nk=");
    scanf("%f", &k);

    for(i=0;i<days;i++)
    {
        if(temps[i]>=k)count++;
    }
    printf("\ncount=%d", count);

    return 0;
}
