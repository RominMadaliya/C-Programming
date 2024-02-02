#include <stdio.h>

void find_smallest();
void positive_negative();
void divisalbe_5_3();
void pass_fail();
void leap_year();
void largest_value();

int main(void)
{
  leap_year();
}

void find_smallest()
{
    int a, b;
    printf("enter the value of a : ");
    scanf("%d", &a);
    printf("enter the value of b : ");
    scanf("%d", &b);

    if (a < b)
    {
        printf("%d is smallest value\n", a);
    }
    else
    {
        printf("%d is smallest value\n", b);
    }
}

void positive_negative()
{
    int a;
    printf("enter the value of a : ");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("%d is nagative value\n", a);
    }
    else if (a > 0)
    {
        printf("%d is positive value\n", a);
    }
    else
    {
        printf("the value is 0");
    }
}

void divisalbe_5_3()
{
    int a;
    printf("enter the value of a : ");
    scanf("%d", &a);
    if (a % 3 == 0)
    {
        printf("%d is divisable by 3\n", a);
    }
    else if (a % 5 == 0)
    {
        printf("%d is divisable by 5\n", a);
    }
    else
    {
        printf("%d is not divisable by 3 and 5",a);
    }
}

void pass_fail()
{
    int sub1, sub2, sub3;
    printf("enter the marks of sub 1 : ");
    scanf("%d", &sub1);
    printf("enter the marks of sub 2 : ");
    scanf("%d", &sub2);
    printf("enter the marks of sub 3 : ");
    scanf("%d", &sub3);

    int percentage = 0;
    int total = sub1 + sub2 + sub3;
    percentage = (total * 100) / 500;

    printf("the total marks of student is %d\n", total);

    if (percentage > 35)
    {
        printf("Student is passed\n");
    }
    else
    {
        printf("Student is failed\n");
    }
}

void leap_year()
{
    int a;
    printf("enter the year : ");
    scanf("%d", &a);

    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 00)
    {
        printf("the year is leap year");
    }
    else
    {
        printf("the year is not leap year");
    }
}

void largest_value()
{
    int a, b, c;
    printf("enter the value of a : ");
    scanf("%d", &a);
    printf("enter the value of b : ");
    scanf("%d", &b);
    printf("enter the value of c : ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is largest value", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is largest value", b);
    }
    else if (c > b && c > a)
    {
        printf("%d is largest value", c);
    }
}