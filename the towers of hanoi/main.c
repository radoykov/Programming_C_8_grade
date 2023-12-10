#include <stdio.h>
#include <stdlib.h>

void hanoy(int n, char s, char m, char d)
{
    if(n==1) printf("\n%c %c %c", s, 26, d);

    else
    {
        hanoy(n-1, s, d, m);
        printf("\n%c %c %c", s, 26, d);
        hanoy(n-1, m, s, d);
    }
}

void main()
{
    int n;
    do
    {
        printf("\nn=");
        scanf("%d", &n);

    }while(n<1);

    hanoy(n, 'A', 'B', 'C');
}
