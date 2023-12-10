#include <stdio.h>
#include <stdlib.h>
#define max_n 10

void input(int *p_arr, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("\nnumber=");
        scanf("%d", &p_arr[i]);
        // scanf("%d", p_arr + i);
    }
    printf("\n\n");
}

void output(int *p_arr, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", p_arr[i]);
        // printf("%d", *(p_arr+i));
    }
}

void sort(int *a, int n)
{
    int change;
    for(int j=1; j<n; j++)
    {
        change=0;
        for(int k=0; k<n-j; k++)
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
}

void merge (int *a, int n, int *b, int m, int *c, int *pk)
{
    int i=0, j=0, k=0;

    while(1)
    {
        if(i>=n)
        {
            while(j<m)
            {
                c[k]=b[j];
                j++;
                k++;
            }
            break;
        }
        else if(j>=m)
        {
            while(i<n)
            {
                c[k]=a[i];
                i++;
                k++;
            }
            break;
        }
        else if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    *pk=k;
}

void main()
{
    int a[max_n], b[max_n], c[max_n * 2];
    int al, bl, cl;
    do
    {
         printf("\nal=");
         scanf("%d", &al);

    }while(al<1 || al>max_n);
    do
    {
         printf("\nbl=");
         scanf("%d", &bl);

    }while(bl<1 || bl>max_n);

    input(&a, al);
    input(&b, bl);
    sort(&a, al);
    sort(&b, bl);
    merge(&a, al, &b, bl, &c, &cl);
    output(&c, cl);
}
