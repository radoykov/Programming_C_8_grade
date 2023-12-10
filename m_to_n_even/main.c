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

    int m=0,i=1,a;

    while(n>0)
    {
        a=n%10;

        if(a%2==0 && a>0)
        {
            m+=i*a;
            i*=10;
        }

        n/=10;
    }

    printf("\nm=%d", m);
    return 0;
}
