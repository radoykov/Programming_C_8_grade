#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum,a;
    printf("\nn=");
    scanf("%d", &n);

    while(n<1)
    {
        printf("\nn=");
        scanf("%d", &n);
    }

    int i=1;

    while(i<=n)
    {
        printf("\na=");
        scanf("%d", &a);
        sum+=a;
        i++;
    }

    printf("\nsum=%d", sum);
}
