#include<stdio.h>
int main()
{
    
    float percentage=0;
int student[5];
int marks[3];

for( int i=1; i<=5; i++)
{
    int total=0;
    for ( int j=0; j<3; j++)
    {
    printf("\nenter the marks of  student %d subject %d: ",i,j+1);
    scanf("%d",&marks[j]);
    total+=marks[j];
    
    }
printf("\nthe total marks is %d\n",total);
 percentage = ((float)total * 100) / 300;
printf("\nthe percentage is %.2f\n",(float)percentage);

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

}


return 0;
}