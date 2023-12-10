#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char s1[200], s2[200], res;

    printf("\ns1=");
    gets(s1);
    printf("\ns2=");
    gets(s2);

    res=nz(&s1, &s2);

    printf("\n%d", res);

}

int nz(char *ps1, char *ps2)
{
    int i=0, k=0, ok=0;

    while(ps1[i]!='\0')
    {
        if(ps2[k]==ps1[i])
        {
            while(ps2[k]!='\0')
            {
                if(ps2[k]!= ps1[i])break;

                k++;
                i++;
            }
            if(ps2[k]=='\0')ok++;
            k=0;
        }
       else i++;

    }

    return ok;
}
