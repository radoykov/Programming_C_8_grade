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

    int i,a=0;

    for(i=1;n>=i;i++)
    {
        if(n%i==0)
        {
            a++;
            printf("\ni=%d", i);
        }
    }

    printf("\n\na=%d", a);
    return 0;
}
