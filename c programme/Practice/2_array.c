#include<stdio.h>
int main()
{
    int student[5];
   
    float percentage;
    int sub[3];

    for(int i=0;i<4;i++)
    {
        float total=0;
        for(int j=0;j<3;j++)
        { 
            printf("Enter the %d student subject %d marks :",i+1,j+1);
            scanf("%d",&sub[j]);
            total+=sub[j];
        }
        printf("\n");
        printf("The student%d total marks is %.2f\n",i+1,total);

        percentage=(total*100)/300;
        printf("The student%d percentage is %.2f\n",i+1,percentage);

       if(percentage>90)
{
    printf("\nGRADE A");
}
else if(percentage>75&&percentage<=90)
{
    printf("\nGRADE B");
}
else if(percentage>65&&percentage<=75)
{
    printf("\nGRADE C");
}
else if(percentage>35&&percentage<=75)
{
    printf("\nGRADE D");
}
else
{
    printf("\nFAILED");
}


        printf("\n");
    }


}
