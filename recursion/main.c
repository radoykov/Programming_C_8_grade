#include <stdio.h>
#include <stdlib.h>

int fakt(int n)
{
    if(n==0)return 1;

    else return n*fakt(n-1);
}

void main()
{
    int n, a;

    do
    {
        printf("\nn=");
        scanf("%d", &n);

    }while(n<0);

    a=fakt(n);
    printf("\n%d", a);

}
