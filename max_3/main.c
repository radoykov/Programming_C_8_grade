#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,c,max;
    printf("\na=");
    scanf("%d", &a);
    printf("\nb=");
    scanf("%d", &b);
    printf("\nc=");
    scanf("%d", &c);

    max = a;

    if(b>max) max = b;

    if(c>max) max = c;

    printf("max=%d", max);
}
