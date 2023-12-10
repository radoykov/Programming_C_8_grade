#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;

    do
    {
        printf("\nk=");
        scanf("%d", &k);

    }while(k<1);

    int n;

    do
    {
        printf("\nn=");
        scanf("%d", &n);

    }while(n<1);

    int i,m,b=0;

    for(i=1;i<=n;i++)
    {
        printf("\nm=");
        scanf("%d", &m);

        int a=0;

        while(m>0)
        {
            m=m/10;
            a++;
        }

        if(a==k) b++;
    }

    printf("\nb=%d", b);
    return 0;
}
