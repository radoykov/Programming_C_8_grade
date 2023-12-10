#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *subStr(char *ps1, char *ps2);

void main()
{
    char s1[20], s2[20], *res;

    printf("\ns1=");
    gets(s1);

    printf("\ns2=");
    gets(s2);

    res = subStr(&s1, &s2);
    printf("%s", res);
}

char *subStr(char *ps1, char *ps2)
{
    int i=0, k=0;
    char *p;

    while(ps1[i]!='\0')
    {
        if(ps2[k]==ps1[i])
        {
            p=&ps1[i];
            i++;
            k++;

            while(ps2[k]!='\0')
            {
                if(ps2[k]!= ps1[i])break;

                k++;
                i++;
            }
            if(ps2[k]=='\0')return p;
            else
            {
                p=0;
                k=0;
            }
        }
        i++;
    }

    return 0;
}
