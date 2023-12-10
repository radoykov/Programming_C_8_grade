#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char s[20], i;
    printf("\ns=");
    gets(s);
    i=str(&s);
    printf("%d", i);
}

int str(char *ps)
{
    int i=0;
    while(ps[i]!= '\0')i++;
    return i;
}
