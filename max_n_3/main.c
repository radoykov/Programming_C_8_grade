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

    int yes=0,i,a,max;

    for(i=1; i<=n && yes==0; i++)
    {
        printf("\na=");
        scanf("%d", &a);

        if(a%3==0)
        {
            yes=1;
            max=a;
        }
    }

    for(; i<=n; i++)
    {
        printf("\na=");
        scanf("%d", &a);

        if(a%3==0)
        {
            if(a>max)
            {
                max=a;
            }
        }
    }

    if(yes==1)
    {
        printf("\nmax=%d", max);
    }

    else
    {
        printf("no such number");
    }

    return 0;
}
