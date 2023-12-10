#include <stdio.h>
#include <stdlib.h>

int main()
{
    int order;
    int sign;

    printf("\norder=");
    scanf("%d", &order);

    printf("\nsign=");
    scanf("%c", &sign);
    scanf("%c", &sign);

    p(order, sign);
    //reverse(order, sign);
    //tree(order, sign);


    return 0;
}

void p(int row, char symbol)
{
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%2c", symbol);
        }
        printf("\n");
    }
}

void reverse(int row, char symbol)
{
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=row; j++)
        {
            if(j<=row - i)
            {
                printf("%2c", ' ');
            }
            else
            {
                printf("%2c", symbol);
            }
        }
        printf("\n");
    }
}

void tree(int row, char symbol)
{
    for(int i=1; i<=row/2; i++)
    {
        for(int j=1; j<=row; j++)
        {
            if(j<=row/2 - i || j>row/2+i)
            {
                printf("%2c", ' ');
            }
            else
            {
                printf("%2c", symbol);
            }
        }
        printf("\n");
    }
}
