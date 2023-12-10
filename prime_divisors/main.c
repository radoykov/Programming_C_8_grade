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

    int a=0,i=2;

    while(n>=i)
    {
        if(n%i==0)
        {
            int b=2;

            while(i%b!=0)
            {
                b++;
            }

            if(i==b)
            {
                a++;
                printf("\ni=%d", i);
            }
        }
        i++;
    }
    printf("\na=%d", a);
    return 0;
}
