#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;

    printf("c=");

    int a=0, b=0;

    do
    {
        scanf("%c", &c);

        if(c != '\n')b++;

        if((c>='a' && c<='z')  || (c>='A' && c<='Z')) a++;

    }while(c != '\n');

    printf("\nletters - %d", a);
    printf("\nsymbols - %d", b);

    return 0;
}
