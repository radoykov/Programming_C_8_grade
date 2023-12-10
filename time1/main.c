#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month,year,vis=0,days;

    do
    {
        printf("\nmonth=");
        scanf("%d", &month);
        printf("\nyear=");
        scanf("%d", &year);

    }while((month<1 || month>12) || year<1);

    if(year%4==0)
    {
         if(year%100!=0) vis=1;

        else if(year%400==0)vis=1;
    }

    switch(month)
    {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:days=31;break;
        case 4:case 6:case 9:case 11:days=30;break;
        case 2:days=28+vis;break;
    }

    printf("\ndays=%d", days);

    return 0;
}
