#include <stdio.h>
#include <stdlib.h>
#define max_grades 20
#define max_students 30

int main()
{
    int arr[max_students][max_grades];
    int students, grades, grade;

    do
    {
        printf("\nstudents count = ");
        scanf("%d", &students);

    }while(students<1 || students>max_students);

    do
    {
        printf("\ngrades count = ");
        scanf("%d", &grades);

    }while(grades<1 || grades>max_grades);

    for(int i=0; i<students; i++)
    {
        printf("\nstudent %d\n", i+1);

        for(int j=0; j<grades; j++)
        {
            do
            {
                printf("grade %d = ", j+1);
                scanf("%d", &grade);

            }while(grade<2 || grade>6);

            arr[i][j] = grade;
        }
    }

    float a[students];
    int sum;

    for(int i=0; i<students; i++)
    {
        sum=0;
        for(int j=0; j<grades; j++)
        {
            sum+=arr[i][j];
        }
        a[i]=(float)sum/grades;
    }

    float b[grades];

    for(int j=0; j<grades; j++)
    {
        sum=0;
        for(int i=0; i<students; i++)
        {
            sum+=arr[i][j];
        }
        b[j]=(float)sum/students;
    }

    float avg=0;
    for(int i=0; i<students; i++)
    {
        avg += a[i];
    }

    avg = avg/students;

    printf("\n");
    for(int i=0; i<students; i++)
    {
        for(int j=0; j<grades; j++)
        {
            printf("%-5d", arr[i][j]);
        }
        printf("%-5.2f\n", a[i]);
    }

    for(int i=0; i<grades; i++)
    {
        printf("%-5.2f", b[i]);
    }

    printf("%-5.2f", avg);

    return 0;
}
