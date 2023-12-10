#include <stdio.h>
#include <stdlib.h>

float step(float a, int n)
{
    if(n==0)return 1;

    else
    {
        if(n>0) return a*step(a, n-1);

        else return (1/a)*step(a, n+1);
    }
}

void main()
{
    int n;
    float a, b;
    do
    {
        printf("\na=");
        scanf("%f", &a);

    }while(a==0);

    printf("\nn=");
    scanf("%d", &n);

    b=step(a, n);

     printf("\nb=%f", b);

}
