#include <stdio.h>
#include <stdlib.h>

void main()
{
    char c[100];
    printf("\nc=");

    for(int i=0; i>=0; i++)
    {
        scanf("%c", &c[i]);
        if(c[i]=='.')break;
    }
    cha(&c, 0);
}

void cha(char *pc, int k)
{
    if(pc[k]!='.')
    {
        cha(pc, k+1);
        printf("%c", pc[k]);
    }
}
