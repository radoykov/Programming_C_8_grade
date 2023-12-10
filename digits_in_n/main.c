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

    int a;
    do
    {
        printf("\na=");
        scanf("%d", &a);

    }while(a>=10 || a<0);

    int yes=0;
    while(n>0 && yes==0)
    {
        if(a==n%10) yes=1;
        n/=10;
    }
    if(yes==1)
    {
        printf("\nnumber contains %d", a);
    }

    else
    {
        printf("\nnumber doesn't contain %d", a);
    }
    return 0;
}
