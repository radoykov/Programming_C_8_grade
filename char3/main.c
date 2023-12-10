#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("\nc=");
    scanf("%c", &c);

    if(c>='a' && c<='z')
    {
        c=c-('a'-'A');
        printf("\nc=%c", c);
    }

    else  printf("\nc=%c", c);

    return 0;
}
