#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,x;

    printf("\na=");
    scanf("%f", &a);
    printf("\nb=");
    scanf("%f", &b);

    if(a==0)
    {
        if(b==0)
        {
            printf("\neach x is a solution");
        }

        else
        {
            printf("\nno solution");
        }
    }

    else
    {
        x=-b/a;
        printf("\nx=%lf", x);
    }
    return 0;
}
