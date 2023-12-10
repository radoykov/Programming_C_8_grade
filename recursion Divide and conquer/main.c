#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x, arr[100], n, kol, change;
    do
    {
        printf("\nn=");
        scanf("%d", &n);
    }while(n<1);

    for(int i=0; i<n; i++)
    {
        printf("\nnumber=");
        scanf("%d", &arr[i]);
    }
    printf("\nx=");
    scanf("%d", &x);

    for(int j=1; j<n; j++)
    {
        change=0;
        for(int k=0; k<n-j; k++)
        {
            if(arr[k]>arr[k+1])
            {
                change=1;
                int g=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=g;
            }
        }
        if(!change)break;
    }
    kol=dac(&arr, n, x, n-1);

    if(kol) printf("Yes");
    else printf("No");
}
int k, l=0;

int dac(int *pc, int num, int x, int r)
{
    if(num>0)
    {
        k=(r+l)/2;
        if(pc[k]==x) return 1;
        if(pc[k]>x) r=k-1;
        if(pc[k]<x) l=k+1;
        if(l>r)return 0;
        dac(pc, num-1, x, r);
    }
}
