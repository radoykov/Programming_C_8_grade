#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char s1[20];

    printf("\ns1=");
    gets(s1);

    replace(&s1, '*');

    puts(s1);
}

void replace(char *ps1, char sym)
{
    int i=0;
    while(ps1[i]!='\0')
    {
        if(ps1[i]>= '0' && ps1[i]<= '9') ps1[i]=sym;
        i++;
    }
}

