#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("\na=");
    scanf("%d", &a);
    printf("\nb=");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("\na=%d", a);
    printf("\nb=%d", b);
    return 0;
}
