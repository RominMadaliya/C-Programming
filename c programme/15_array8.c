#include <stdio.h>
int main(void)
{
    int marks[5][3], total[5];
    float percentage[5];
   

    for (int i = 0; i < 5; i++)
    {
        total[i]=0;
        percentage[i]=0;
        for (int j = 0; j < 3; j++)
        {
            printf("enter the student %d subject %d marks : ", i, j);
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
        }
        percentage[i] = ((float)total[i] * 100) / 300;
    }

        
    printf("Student Subject1 Subject2 Subject3  total  percentage  grade\n");
    for (int j = 0,i=0; j < 5; j++,i++)
    {
         char a='A';
        if (percentage[i] > 90)
        {
           a = 'A';
        }
        else if (percentage[i] > 75 && percentage[i] <= 90)
        {
            a = 'B';
        }

        else if (percentage[i] > 60 && percentage[i] <= 75)
        {
            a = 'C';
        }

        else if (percentage[i] > 35 && percentage[i] <= 60)
        {
            a = 'D';
        }
        else
        {
            a = 'F';
        }
    
        int v=0;
        printf("%d\t  %d\t   %d\t   %d\t    %d\t    %.2f\t %c\n", j + 1, marks[i][v], marks[i][v + 1], marks[i][v + 2], total[j], percentage[j], a);
        v++;
    }
}