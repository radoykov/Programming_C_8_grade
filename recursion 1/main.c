#include <stdio.h>
#include <stdlib.h>

int counter=0;

int fib(int n)
{
    counter++;
    if(n<=2)return 1;

    else return fib(n-1)+fib(n-2);
}

void main()
{
    int n, a;
    do
    {
        printf("\nn=");
        scanf("%d", &n);

    }while(n<1);

    a=fib(n);

     printf("\na=%d", a);
     printf("\ncounter=%d", counter);
}
