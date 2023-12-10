#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;

    int ok = 1, i=1;

    printf("\nc=");


    do
    {
        scanf("%c", &c);

        if(c=='\n') break;

        if(c<'0' || c>'9') ok=0;
        if(i==1 && (c=='-' || c=='+' )) ok=1;

        i=0;

    }while(c != '\n');



    if(ok)printf("Yes");

    else printf("No");

    return 0;
}
