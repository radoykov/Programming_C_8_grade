#include <stdio.h>
#include <stdlib.h>
#define max_count 100

int main()
{
    int a[max_count], n;

    do
    {
        printf("\nn=");
        scanf("%d", &n);

    }while(n<1 || n>max_count);

    for(int i=0; i<n; i++)
    {
        printf("\nnumber=");
        scanf("%d", &a[i]);
    }

    for(int j=1; j<n; j++)
    {
        for(int k=0; k<n-j; k++)
        {
            if(a[k]>a[k+1])
            {
                int g=a[k];
                a[k]=a[k+1];
                a[k+1]=g;
            }
        }
    }

    for(int j=0; j<n; j++)
    {
        printf("%d ", a[j]);
    }
    return 0;
}
