#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    char oper;

    printf("\na=");
    scanf("%f", &a);

    do
    {

        do
        {
            oper=getchar();
            printf("\noper=");
            oper=getchar();

        }while(oper != '+' && oper != '-' && oper != '*' && oper != '/' && oper != '=');

        if(oper=='=')break;

        printf("\nb=");
        scanf("%f", &b);

        switch(oper)
        {
            case '+': a=a+b; break;
            case '-': a=a-b; break;
            case '*': a=a*b; break;
            case '/':
                 while(b==0)
                 {
                     printf("\nb=");
                     scanf("%f", &b);
                 }
                 a=a/b; break;
        }


    }while(1);

    printf("\na=%.2f", a);

    return 0;
}
