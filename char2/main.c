#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("\na=");
    scanf("%c", &a);


    if(a>='A' && a<='Z' || a>='a' && a<='z') printf("\nletter");

    else if(a>='0' && a<='9' ) printf("\nnumber");

    else printf("\nother");

    return 0;
}
