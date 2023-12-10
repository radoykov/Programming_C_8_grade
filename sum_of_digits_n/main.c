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

    int sum=0;

    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }

    printf("\nsum=%d", sum);
    return 0;
}
