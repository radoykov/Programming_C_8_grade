#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,x;

    printf("\na=");
    scanf("%f", &a);
    printf("\nb=");
    scanf("%f", &b);

    if(a==0)
    {
        if(b>0) printf("\neach x is a solution");

        else printf("\nno solution");
    }

    else
    {
        if(a>0) printf("x > %f", -b/a);

        else printf("x < %f", -b/a);
    }
    return 0;
}
