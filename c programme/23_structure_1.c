#include <stdio.h>

#define N 5 // enter how many subject you want 
const int M = 4; // enter how many students you want 

typedef struct Student
{
    char name[30];
    int rollno;
    int marks[N];  //enter how many subject you want
} stu;

typedef struct result
{
    int total;
    float percentage;
} result;

result answer(stu a);

int main(void)
{

    stu student[M];
    result stu[M];

    for (int i = 0; i < M; i++)
    {
        printf("enter the name of student %d : ", i + 1);
        gets(student[i].name);
        printf("enter the roll no of sutdent %d : ", i + 1);
        scanf("%d", &student[i].rollno);

        for (int t = 0; t < N; t++)
        {
            printf("enter the marks of sub %d : ", t + 1);
            scanf("%d", &student[i].marks[t]);
        }
        getchar();
    }

    for (int i = 0; i < M; i++)
    {
        stu[i] = answer(student[i]);

        printf("\nthe total marks of sutdent %d is %d \n", i + 1, stu[i].total);
        printf("the total percentage of students %d is %.2f \n", i + 1, stu[i].percentage);
    }
}






result answer(stu a)
{
    int total = 0;

    for (int i = 0; i < N; i++)
    {
        total += a.marks[i];
    }

    result m;

    m.total = total;

    float percentage;
    percentage = (float)total / N;

    m.percentage = percentage;

    return m;
}
