// #include<stdio.h>

// int main()
// {
    
//     int d,c;

    
//     printf("enter the value of d:");
//     scanf("%d",&d);
//     printf("enter the value of c:");
//     scanf("%d",&c);


//     int*a=&d;
//     int*b=&c;

//     *a=*a+*b;
//     *b=*a-*b;
//     *a=*a-*b;

//     printf("The value of d is %d and the value of c is %d",d,c);
// }



#include<stdio.h>

int main()
{

    int a,b,e;

    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    int*c=&a;
    int*d=&b;

    e=*c;
    *c=*d;
    *d=e;

     printf(" the value of a: %d\n",a);
    
    printf(" the value of b: %d",b);
    


    return 0;
}