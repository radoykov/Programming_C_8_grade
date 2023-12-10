#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nn=");
    scanf("%d", &n);

    while(n<1)
    {
        printf("\nn=");
        scanf("%d", &n);
    }

    int sum,i=1,a;

    while(i<=n)
    {
        printf("\na=");
        scanf("%d", &a);

        if(a%3==0)
            sum+=a;
        i++;
    }
    printf("\nsum=%d", sum);
    return 0;
}
