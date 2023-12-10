#include <stdio.h>
#include <stdlib.h>
#define n 30000
#include <time.h>

int main()
{
    int a[n], b[n], c[n];

    for(int i=0; i<n; i++)
    {
         int x=rand(); // random
        // int x = i;   // sorted
        // int x = n-i;    // fully unsorted
        a[i]=x;
        b[i]=x;
        c[i]=x;
    }

    clock_t start_1, end_1;

     start_1 = clock();
    //bubble sort
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
    end_1=clock();

    double total_t_1 = (double)(end_1 - start_1) / CLOCKS_PER_SEC;
    printf("Total time taken by bubble sort: %lf\n", total_t_1  );

    clock_t start_2, end_2;
    //direct selections
    start_2 = clock();

    int d, index;
    for(int i=0; i<n; i++)
    {
        d=b[i];
        index=i;

        for(int j=i+1; j<n; j++)
        {
            if(b[j]<d)
            {
                d=b[j];
                index=j;
            }
        }
        b[index]=b[i];
        b[i]=d;
    }
    end_2=clock();

    double total_t_2 = (double)(end_2 - start_2) / CLOCKS_PER_SEC;
    printf("Total time taken by selection sort: %lf\n", total_t_2  );

    clock_t start_3, end_3;
    //direct insertion
    start_3=clock();
    int f;
    for(int i=1; i<n; i++)
    {
        int j;
        f=c[i];

        for( j=i-1; j>=0; j--)
        {
            if(c[j]>f)
            {
                c[j+1]=c[j];
            }

            else break;
        }
        c[j+1]=f;
    }
    end_3=clock();

    double total_t_3 = (double)(end_3 - start_3) / CLOCKS_PER_SEC;
    printf("Total time taken by insertion sort: %lf\n", total_t_3  );

    return 0;
}
