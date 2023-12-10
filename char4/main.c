#include <stdio.h>
#include <stdlib.h>

int  main()
{
    char c;

    printf("c=");

    do
    {
        scanf("%c", &c);

        if(c>='a' && c<='z')
        {
            c= c-('a'-'A');
            printf("%c", c);
        }

        else printf("%c", c);

    }while(c != '\n');

    return 0;
}
