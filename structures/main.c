#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct TStudent
{
    int number;
    char name[80];
    float marks[20];
    float avg;
};

void main()
{
    int students_count, marks_count;

    struct TStudent s[30];

    do
    {
        printf("\nstudent count=");
        scanf("%d", &students_count);

    }while(students_count<1);

    do
    {
        printf("\nsubjects count=");
        scanf("%d", &marks_count);

    }while(marks_count<1);

    for(int i=0; i<students_count; i++)
    {
        do
        {
            printf("\nNo= ");
            scanf("%d", &s[i].number);

        }while(s[i].number<1);

        printf("\nname= ");
        getchar();
        gets(s[i].name);

        s[i].avg=0;

        float mark=0;

        for(int k=0; k<marks_count; k++)
        {
           do
           {
                printf("\nmarks %d=", k+1);
                scanf("%f", &mark);

           }while(mark<2 || mark>6);

            s[i].marks[k] = mark;
            s[i].avg+=mark;
        }
        s[i].avg/=marks_count;
    }

    int a=0;
    printf("\nplease select:\n - 1: Names\n - 2: Avg marks\n - 3: Correction\n - 4: Scholarships\n - 5: Exit");

    do
    {
        printf("\n\nnumber=");
        scanf("%d", &a);

        if(a==1) sort_name(s, students_count);

        if(a==2)
        {
            for(int i=0; i<students_count; i++)
            {
                printf("\nstudent %d avg=%f", i+1, s[i].avg);
            }
        }

        if(a==3)
        {
            int flag=0;

            for(int i=0; i<students_count; i++)
            {
                for(int k=0; k<marks_count; k++)
                {
                    if(s[i].marks[k]==2)
                    {
                        printf("\nstudent No %d %s", s[i].number, s[i].name);
                        flag=1;
                        break;
                    }
                }
            }

            if(flag==0) printf("\nNo body");
        }

        if(a==4)
        {
            int x = 0;

            for(int i=0; i<students_count; i++)
            {
                if(s[i].avg>5.5)
                {
                    printf("\nstudent No %d %s", s[i].number, s[i].name);
                    x = 1;
                }

            }

            if(x==0) printf("\nNo body");
        }

    }while(a!=5);

}

void sort_name(struct TStudent s[30], int sc)
{
    int change;

    for(int j=1; j<sc; j++)
    {
        change=0;

        for(int k=0; k<sc-j; k++)
        {
            if(strcmp(s[k].name, s[k+1].name) > 0)
            {
                struct TStudent g;
                g=s[k];
                s[k]=s[k+1];
                s[k+1]=g;

                change=1;
            }
        }

        if(!change)break;
    }

    for(int i=0; i<sc; i++)
    {
       printf("\n%s", s[i].name);
    }
}
