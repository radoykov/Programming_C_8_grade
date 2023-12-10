#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;

    do
    {
        printf("\nm=");
        scanf("%d", &m);
        printf("\nn=");
        scanf("%d", &n);

    }while(m>=n);

    int i,b,a,yes=0,c=0,d;

    for(;m<=n;m++)
    {
        i=m;

        if(i<0) i=-i;

        while(i>0 && yes==0)
        {
            a=i%10;
            i=i/10;
            d=i;

            while(d>0 && yes==0)
            {
                b=d%10;
                d=d/10;

                if(a==b) yes=1;
            }
        }

        if(yes==0) c++;

        yes=0;
    }

    printf("\nc=%d", c);

    return 0;
}
