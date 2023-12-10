#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char s1[20],s2[20];
    printf("\ns2=");
    gets(s2);
    copy(&s1, &s2);
    printf("%s", s1);
}

 void copy(char *ps1, char *ps2)
{
    int i=0;
    while(ps2[i]!= '\0')
    {
        ps1[i]=ps2[i];
        i++;
    }
    ps1[i]='\0';

}
