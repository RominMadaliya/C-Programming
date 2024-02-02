#include<stdio.h>

int sub1,sub2,sub3;

int total()
{
    return sub1+sub2+sub3;
}

float percentage(int a)
{
    return (((float)a*100)/300);
}

int main(void)
{
    printf("enter marks of sub1 : ");
    scanf("%d",&sub1);

    printf("enter marks of sub2 : ");
    scanf("%d",&sub2);
    
    printf("enter marks of sub3 : ");
    scanf("%d",&sub3);
    
    printf("The total marks is %d\n",total(sub1,sub2,sub3));
    printf("The percentage of student is %.2f\n",percentage(total(sub1,sub2,sub3)));
    return 0;
}