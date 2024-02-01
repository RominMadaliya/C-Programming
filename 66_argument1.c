#include <stdio.h>

float simple_interest(int a, int b, int c);
int total_marks(int a, int b, int c);
float percentage(int a);

int main(void)
{
    printf("\n");
    printf("If you want to calulate simple interest , enter number 1\n");
    printf("If you want to calulate total marks and percentage , enter number 2\n");

    int n;

    printf("\nEnter the value of n : ");
    scanf("%d", &n);

    if (n == 1)
    {

        int p, b, c;
        printf("\nEnter the principal amount: ");
        scanf("%d", &p);
        printf("Enter the rate: ");
        scanf("%d", &b);
        printf("Enter the number of years: ");
        scanf("%d", &c);
        printf("The simple interest is: %.2f\n", simple_interest(p, b, c));
        printf("\n");
    }

    if (n == 2)
    {
        int sub1, sub2, sub3;
        printf("\nEnter the marks of sub1 : ");
        scanf("%d", &sub1);
        printf("Enter the marks of sub2 : ");
        scanf("%d", &sub2);
        printf("Enter the marks of sub3 : ");
        scanf("%d", &sub3);

        int total = total_marks(sub1, sub2, sub3);
        float percentage1 = percentage(total);
        printf("\nthe total marks of strudent is %d", total);
        printf("the percentage of students in strudent is %.2f\n", percentage1);
    }
}

float simple_interest(int a, int b, int c)
{

    float interest = 0;
    interest = (float)a * (1 + ((float)b / 100) * (float)c) - (float)a;

    return interest;
}

int total_marks(int a, int b, int c)
{
    int total = 0;
    total = a + b + c;
    return total;
}

float percentage(int a)
{
    float percentage = 0;
    percentage = (float)a * 100 / 300;
    return percentage;
}