#include<stdio.h>

int main()
{
    // int*a;
    // int*b;
    int d,c;

    
    printf("enter the value of d:");
    scanf("%d",&d);
    printf("enter the value of c:");
    scanf("%d",&c);


    int*a=&d;
    int*b=&c;

    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;

    printf("The value of d is %d and the value of c is %d",a,b);
}