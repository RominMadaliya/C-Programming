#include<stdio.h>

int main()
{
    int student[5][4];
    float tot[5],per[5];

    for(int i=0;i<5;i++)
    {
         tot[i]=0;
         per[i]=0;
        for(int j=0;j<4;j++)
        {
            printf("\nEnter the studenrt %d subject %d mark :",i+1,j+1);
            scanf("%d",&student[i][j]);
           
            tot[i]+=student[i][j];
        }
       

        per[i]=(tot[i]*100)/300;
        

          printf("\n");
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("\nthe studenrt %d subject %d mark %d",i+1,j+1,student[i][j]); 
        }
        printf("\nThe total marks of student %d is %.2f",i+1,tot[i]);
        printf("\nThe Percentage of student %d is %.2f",i+1,per[i]);

          printf("\n");
    }
    return 0;
}