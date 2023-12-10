#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;

    int ok = 1, i=1, acc = 0, sign = 1;

    printf("c=");

    do
    {
        scanf("%c", &c);

        if(c=='\n') break;

        if(i==1 && (c=='-' || c=='+' ))
        {
             if(c=='-') sign = -1;
             i=0;
             continue;
        }

        i=0;

        if(c>='0' && c<='9')
        {
            c = c -'0';

            acc = acc * 10 + c ;

        }

        else ok=0;

    }while(c != '\n');

    acc = acc * sign;


    if(ok)printf("Yes %d", acc);

    else printf("No");

    return 0;
}
