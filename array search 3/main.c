#include <stdio.h>
#include <stdlib.h>
#define n 100

int main()
{
     int a[n], b, c, change;

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
    int l=0, r=b-1, k, ok=0;
    for(int i=0; i<b; i++)
    {
        k=(r+l)/2;
        if(a[k]==c)
        {
            ok=1;
            break;
        }
        if(a[k]>c) r=k-1;
        if (a[k]<c) l=k+1;
        if(l>r)break;
    }
    if(ok)printf("Yes");
    else printf("No");
    return 0;
}
