#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day, month, year, vis=0, d,last;

    do
    {
        printf("\nday=");
        scanf("%d", &day);

        printf("\nmonth=");
        scanf("%d", &month);

        printf("\nyear=");
        scanf("%d", &year);

        if(year%4==0)
        {
            if(year%100!=0) vis=1;

            else if(year%400==0)vis=1;
        }

        if(month==1)last=12;

        else last=month-1;

        switch(month)
        {
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:d=31;break;
            case 4:case 6:case 9:case 11:d=30;break;
            case 2:d=28+vis; break;
        }

        switch(last)
        {
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:last=31;break;
            case 4:case 6:case 9:case 11:last=30;break;
            case 2:last=28+vis;break;
        }

    }while((day<1 || day>d) ||(month<1 || month>12) || year<0);

    int  next_day, last_day, year_l, month_l;

    if(day!=1)
    {
        last_day=day-1;
        year_l=year;
        month_l=month;
    }
    else if(month==1)
    {
        month_l=12;
        last_day=31;
        year_l=year-1;
    }

    else
    {
        month_l=month-1;
        last_day=last;
        year_l=year;
    }

    if(day!=d) next_day=day+1;

    else if(month==12)
    {
        month=1;
        next_day=1;
        year++;
    }

    else
    {
        month++;
        next_day=1;
    }

     printf("\nlast day is %d", last_day);
     printf("\nmonth is %d", month_l);
     printf("\nyear is %d", year_l);

     printf("\n\nnext day is %d", next_day);
     printf("\nmonth is %d", month);
     printf("\nyear is %d", year);

    return 0;
}
