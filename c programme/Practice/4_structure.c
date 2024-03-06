#include <stdio.h>
struct student
{
    char Stusent_Name[100];
    float sub[3];
    float tot;
    float per;
};

int main()
{
    struct student s[5];
    start:
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the student %d name: ", i + 1);
        gets(s[i].Stusent_Name);
        s[i].tot = 0;
        s[i].per = 0;
        for (int j = 0; j < 3; j++)
        {
            
            printf("Eneter the student %d sub %d marks : ", i + 1, j + 1);
            scanf("%f", &s[i].sub[j]);

            if(s[i].sub[j]<1 || s[i].sub[j]>100)
            {
            printf("Invalid Input\n\n");
            getchar();
            goto start;

            }
            s[i].tot += s[i].sub[j];
        }
        s[i].per = (s[i].tot * 100) / 300;
        getchar();
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n The student %d is %s", i + 1, s[i].Stusent_Name);

        for (int j = 0; j < 3; j++)
        {
            printf("\nsubject %d marks is %.2f", j + 1, s[i].sub[j]);
        }
        printf("\nThe total marks of student %d is %.2f", i + 1, s[i].tot);
        printf("\nThe Percentage of student %d is %.2f", i + 1, s[i].per);
    }
    
   
    return 0;
}

