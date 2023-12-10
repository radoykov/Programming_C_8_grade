#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int a;
    char names[30][80];

    do
    {
        printf("\na=");
        scanf("%d", &a);
        getchar();

    }while(a<1);

    for(int i=0; i<a; i++)
    {
        printf("\nname %d =", i+1);
        gets(names[i]);
    }

    arraysort(names, a);

    for(int i=0; i<a; i++)
    {
        printf("\n%s", names[i]);
    }
}

void arraysort(char pnames[30][80], int n)
{
    int change;
    for(int j=1; j<n; j++)
    {
        change=0;

        for(int k=0; k<n-j; k++)
        {
            if(strcmp(pnames[k], pnames[k+1]) > 0)
            {
                change=1;
                char g[80];
                strcpy(g, pnames[k]);

                strcpy(pnames[k], pnames[k+1]);

                strcpy(pnames[k+1],g);
            }
        }
        if(!change)break;
    }
}
