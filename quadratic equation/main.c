#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int uravn(float a, float b, float c, float *px1, float *px2)
{
    float D=0;
    if(a==0)
    {
        if(b==0)
        {
            if(c==0) return 1;

            else return 2;
        }
        else
        {
            *px1=-c/b;
            return 3;
        }
    }
    else
    {
        D=b*b-4*a*c;

        if(D<0)return 4;
        else
        {
            *px1=(-b+sqrt(D))/(2*a);
            *px2=(-b-sqrt(D))/(2*a);
            return 5;
        }
    }
}
void main()
{
    float a, b, c, x1, x2;
    printf("\na=");
    scanf("%f", &a);
    printf("\nb=");
    scanf("%f", &b);
    printf("\nc=");
    scanf("%f", &c);
    int st;
    st=uravn(a, b, c, &x1, &x2);
    switch(st)
    {
     case 1: printf("\neach x is a solution"); break;
     case 2: printf("\nno solution"); break;
     case 3: printf("\nx1 is a solution = %f", x1); break;
     case 4: printf("\nit has no real roots"); break;
     case 5: printf("\nthere is x1 = %f \n x2=%f ", x1, x2); break;
    }
}
