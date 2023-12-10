#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day, month, year, vis, d;

    do
    {
        printf("\nday=");
        scanf("%d", &day);

        printf("\nmonth=");
        scanf("%d", &month);

        printf("\nyear=");
        scanf("%d", &year);

        vis=0;
        if(year%4==0)
        {
            if(year%100!=0) vis=1;

             else if(year%400==0)vis=1;
        }

        switch(month)
        {
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:d=31; break;
            case 4:case 6:case 9:case 11:d=30; break;
            case 2:d=28+vis; break;
        }

    }while((day<1 || day>d) ||(month<1 || month>12) || year<0);

    int sum=0;

    sum = d - day + 1;

    month++;
    for(;month<=12; month++)
    {
        switch(month)
        {
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:d=31; break;
            case 4:case 6:case 9:case 11:d=30; break;
            case 2:d=28+vis; break;
        }

        sum+=d;
    }
    int past=0;

    if(year<=2022)
    {
        year++;

        for(; year<=2022; year++)
        {
            vis=0;
            if(year%4==0)
            {
                if(year%100!=0) vis=1;

                else if(year%400==0)vis=1;
            }

            if(vis==1)sum+=366;

            else sum+=365;
        }
        past=1;
    }

    else
    {
        sum*=-1;
        for(; year>2022; year--)
        {
            vis=0;
            if(year%4==0)
            {
                if(year%100!=0) vis=1;

                else if(year%400==0)vis=1;
            }

            if(vis==1)sum+=366;

            else sum+=365;
        }
    }

    sum=sum%7;

    if(past)
    {
        switch(sum)
        {
            case 0:printf("\nSunday"); break;
            case 1:printf("\nSaturday"); break;
            case 2:printf("\nFriday"); break;
            case 3:printf("\nThursday"); break;
            case 4:printf("\nWednesday"); break;
            case 5:printf("\nTuesday"); break;
            case 6:printf("\nMonday"); break;
        }
    }

    else
    {
        switch(sum)
        {
            case 0:printf("\nSunday"); break;
            case 1:printf("\nMonday"); break;
            case 2:printf("\nTuesday"); break;
            case 3:printf("\nWednesday"); break;
            case 4:printf("\nThursday"); break;
            case 5:printf("\nFriday"); break;
            case 6:printf("\nSaturday"); break;
        }
    }

    return 0;
}
