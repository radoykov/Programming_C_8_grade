#include <stdio.h>
#include <stdlib.h>
#define n 100

int main()
{
     int a[n], b, c;

    do
    {
        printf("\nb=");
        scanf("%d", &b);

    }while(b<1 || b>n);

    for(int i=0; i<b; i++)
    {
        printf("\nnumber=");
        scanf("%d", &a[i]);
    }
     printf("\nc=");
     scanf("%d", &c);

    int ok=0, change;

     for(int j=1; j<b; j++)
     {
        change=0;
        for(int k=0; k<b-j; k++)
        {
            if(a[k]>a[k+1])
            {
                change=1;
                int g=a[k];
                a[k]=a[k+1];
                a[k+1]=g;
            }
        }
        if(!change)break;
    }

    for(int i=0; i<b; i++)
    {
        if(a[i]>c)break;
        else if(a[i]==c)
        {
            ok=1;
            break;
        }
    }
    if(ok)printf("Yes");
    else printf("No");

    return 0;
}
