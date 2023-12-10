#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;

    do
    {
        printf("\na=");
        scanf("%f", &a);

    }while(a==0);

    int n,c;

    printf("\nn=");
    scanf("%d", &n);

    if(n>0) c=n;

    else c=-n;

    int i;

    float Ans=1;

    for(i=1;i<=c;i++)
    {
        Ans*=a;
    }

    if(n>=0) printf("\nAns=%f", Ans);

    else printf("\nAns=%f", 1/Ans);
    return 0;
}
