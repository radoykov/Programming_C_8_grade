#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 200

void main()
{
    char s1[n], s2[n], s3[n],s4[n];

    printf("\ns1=");
    gets(s1);
    printf("\ns2word search=");
    gets(s2);
    printf("\ns3replace=");
    gets(s3);

    sar(&s1, &s2, &s3, &s4);
    puts(s4);
}

 void sar(char *ps1, char *ps2, char *ps3, char *ps4)
{
    int i=0, k=0, j=0, m=0;

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

            if(ps2[k]=='\0')
            {
                while(ps3[j]!='\0')
                {
                    ps4[m]=ps3[j];

                    m++;
                    j++;
                }
                j=0;
                k=0;
            }

            else
            {
                for(int x=i-k; x<i; x++)
                {
                    ps4[m]=ps1[x];
                    m++;
                }
                k=0;
            }
        }

        else
        {
            ps4[m]=ps1[i];
            m++;
            i++;
        }
    }
    ps4[m]='\0';
}
