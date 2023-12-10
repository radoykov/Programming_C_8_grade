#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    do
    {
        printf("\na=");
        scanf("%d", &a);

    }while(a<1);

    int c=1;

    while(a>0)
    {
        c*=a;
        a--;
    }

    printf("\n%d", c);
    return 0;
}
