#include <stdio.h>

int find_smallest();
int positive_negative();
int divisalbe_5_3();
int pass_fail();
int leap_year();
int largest_value();

int main(void)
{
    int n;

    printf("if you want to find the smallst value enter 1\n");
    printf("if you want to find the value is positive or negative enter 2\n");
    printf("if you want to find number is divisable by 5 or 3 enter 3\n");
    printf("if you want to find the student is passed or fail enter 4\n");
    printf("if you want to find the year is leap year or not enter 5\n");
    printf("if you want to find the largest value among three values enter 6\n");

    printf("\nenter the value of n :");
    scanf("%d", &n);

    if (n == 1)
    {
        int ans;
        ans = find_smallest();
        printf("\nthe smallest value is %d", ans);
    }

    if (n == 2)
    {
        int ans;
        ans = positive_negative();

        if (ans == 1)
        {
            printf("the value is nagative value\n");
        }
        else if (ans == 2)
        {
            printf("the value is positive value\n");
        }
        else if (ans == 3)
        {
            printf("the value is zero");
        }
    }

    if (n == 3)
    {
        int ans;
        ans = divisalbe_5_3();
        if (ans == 3)
        {
            printf("the number is divisable by 3\n");
        }
        else if (ans == 5)
        {
            printf("the number is divisable by 5\n");
        }
        else if (ans == 0)
        {
            printf("the number is not divisable by 3 and 5");
        }
    }

    if (n == 4)
    {
        int ans;
        ans = pass_fail();
        if (ans == 1)
        {
            printf("the student is passed\n");
        }
        else if (ans == 2)
        {
            printf("the student is fail\n");
        }
    }

    if (n == 5)
    {
        int ans;
        ans = leap_year();
        if (ans == 1)
        {
            printf("the year is leap year\n");
        }
        else if (ans == 0)
        {
            printf("the year is not leap year\n");
        }
    }

    if (n == 6)
    {
        int ans;
        ans = largest_value();

        printf("the largest value is %d\n", ans);
    }
}

int find_smallest()
{
    int a, b;
    printf("\nenter the value of a : ");
    scanf("%d", &a);
    printf("enter the value of b : ");
    scanf("%d", &b);

    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int positive_negative()
{
    int a;
    printf("\nenter the value of a : ");
    scanf("%d", &a);

    if (a < 0)
    {
        return 1;
    }
    else if (a > 0)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

int divisalbe_5_3()
{
    int a;
    printf("\nenter the value of a : ");
    scanf("%d", &a);
    if (a % 3 == 0)
    {
        return 3;
    }
    else if (a % 5 == 0)
    {
        return 5;
    }
    else
    {
        return 0;
    }
}

int pass_fail()
{
    int sub1, sub2, sub3;
    printf("enter the marks of sub 1 : ");
    scanf("%d", &sub1);
    printf("enter the marks of sub 2 : ");
    scanf("%d", &sub2);
    printf("enter the marks of sub 3 : ");
    scanf("%d", &sub3);

    float percentage = 0;
    int total = sub1 + sub2 + sub3;
    percentage = (total * 100) / 300;

    if (percentage >= 35)
    {
        return 1;
    }
    else if (percentage < 35)
    {
        return 2;
    }
}

int leap_year()
{
    int a;
    printf("\nenter the year : ");
    scanf("%d", &a);

    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 00)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int largest_value()
{
    int a, b, c;
    printf("\nenter the value of a : ");
    scanf("%d", &a);
    printf("enter the value of b : ");
    scanf("%d", &b);
    printf("enter the value of c : ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else if (c > b && c > a)
    {
        return c;
    }
}