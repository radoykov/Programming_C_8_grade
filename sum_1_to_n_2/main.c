#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum;
    printf("\nn=");
    scanf("%d", &n);

    while(n<1)
    {
        printf("\nn=");
        scanf("%d", &n);
    }

    int i=1;

    do
    {
        sum+=i;
        i++;
    }
    while(i<=n);

    printf("\nsum=%d", sum);
    return 0;
}
