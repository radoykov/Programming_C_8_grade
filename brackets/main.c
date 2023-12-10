#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int a[250][2], skobi[250];

    printf("\na=");
    int br=0, i=0;

    while(1)
    {
        scanf("%c", &c);
        if(c == '\n') break;
        if(i>=250)break;

        if(c == '(')
        {
            skobi[i]=1;
            i++;
            br++;
        }

        else if(c == ')')
        {
            skobi[i]=2;
            i++;
            br--;
        }
        if(br < 0) break;
    }

    int ix=0;
    if(br == 0)
    {
        printf("Yes\n");

        for(int k=0; k<250; k++)
        {
            if(skobi[k]==2)
            {
               for(int j=k; j>=0; j--)
               {
                    if(skobi[j]==1)
                    {
                        skobi[j]=0;
                        a[ix][0]=j+1;
                        a[ix][1]=k+1;
                        ix++;
                        break;
                    }
                }
            }
        }
    }

    else printf("No\n");

    int b,b2;
    for(int i=1; i<ix; i++)
    {
        int j;
        b=a[i][0];
        b2=a[i][1];

        for( j=i-1; j>=0; j--)
        {
            if(a[j][0]>b)
            {
                a[j+1][0]=a[j][0];
                a[j+1][1]=a[j][1];
            }

            else break;
        }
        a[j+1][0]=b;
        a[j+1][1]=b2;
    }

    for(int i=0;i<ix; i++)
    {
        printf("%d-%d", a[i][0], a[i][1]);
        printf("\n");
    }

    return 0;
}
