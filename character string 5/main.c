#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char s1[20];
    int i, n;

    printf("\ns1=");
    gets(s1);

    n=str(&s1);
    i=sym(&s1, n);

    if(i)printf("\nYes");
    else printf("\nNo");
}

int sym(char *ps1, int b)
{
    for(int i=0; i<b/2; i++)
    {
        if(ps1[i]!= ps1[b-i-1]) return 0;
    }
    return 1;
}

int str(char *ps)
{
    int i=0;
    while(ps[i]!= '\0')i++;
    return i;
}

