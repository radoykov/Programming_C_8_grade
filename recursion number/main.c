#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a;

    printf("\na=");
    scanf("%d", &a);

    num(a);
}

void num(int b)
{
    if(b>0)
    {
        printf("%d", b%10);
        num(b/10);
    }
}
