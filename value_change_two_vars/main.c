#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("\na=");
    scanf("%d", &a);
    printf("\nb=");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\na=%d b=%d", a,b);
    return 0;
}
