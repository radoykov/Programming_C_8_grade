#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char s1[20], s2[20], res;

    printf("\ns1=");
    gets(s1);
    printf("\ns2=");
    gets(s2);

    res=strcmp1(&s1, &s2);

    printf("\n%d", res);

}

int strcmp1(char *ps1, char *ps2)
{
    int i=0;

    while(ps1[i]!='\0')
    {
        if(ps2[i] =='\0') return 1;
        if(ps1[i]!=ps2[i])
        {
            if(ps1[i]>ps2[i]) return 1;
            else return -1;
        }
        i++;
    }
    if(ps2[i] !='\0') return -1;
    return 0;
}
