#include <stdio.h>

float simple_interest();
int gst_netbill();
int swapping_value_2();
int swapping_value_3();

int main(void)
{
    printf("  \n");
    printf("If you want to calculate simple interest enter 1\n");
    printf("If you want to calculate gst and net bill enter 2\n");
    printf("If you want to swap two values enter 3\n");
    printf("If you want to swap three values enter 4\n");

    int n;

    printf("\nenter the number : ");
    scanf("%d", &n);

    if (n == 1)
    {
        float a = simple_interest();
        printf("\nThe interest is %.2f\n", a);
        printf(" \n");
    }

    if (n == 2)
    {
        gst_netbill();
    }

    if (n == 3)
    {
        swapping_value_2();
    }
    if (n == 4)
    {
        swapping_value_3();
    }
}

float simple_interest()
{
    int p, r, t;

    printf("\nenter the intial amount : ");
    scanf("%d", &p);
    printf("enter the interest rate : ");
    scanf("%d", &r);
    printf("enter the duration in months : ");
    scanf("%d", &t);

    float interest = 0;
    interest = (float)p * (1 + ((float)r / 100) * ((float)t / 12)) - (float)p;

    return interest;
}
int gst_netbill()
{
    int rate, qty, amt;
    float discount = 0, bill_amount = 0, gst = 0, netbill = 0;

    printf("\nenter the rate of prouduct : ");
    scanf("%d", &rate);

    printf("enter the quntity of prouduct : ");
    scanf("%d", &qty);

    amt = rate * qty;
    discount = (amt * 5 / 100);

    bill_amount = amt - discount;
    gst = ((float)bill_amount * 8 / 100);
    netbill = bill_amount + gst;

    printf("\nRATE  QUANTITY  AMOUNT  DISCOUNT  BILL_AMOUNT    GST     NETBILL\n");
    printf("%d\t%d\t%d\t%.2f\t   %.2f\t%.2f\t%.2f\n", rate, qty, amt, discount, bill_amount, gst, netbill);
    printf(" \n");
    return 0;
}
int swapping_value_2()
{
    int a, b;

    printf("\nenter the value of a : ");
    scanf("%d", &a);

    printf("enter the value of b : ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nnow the value of a is %d and value of b is %d\n", a, b);
    printf(" \n");

    return 0;
}
int swapping_value_3()
{
    int a, b;

    printf("\nenter the value of a : ");
    scanf("%d", &a);

    printf("enter the value of b : ");
    scanf("%d", &b);

    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("\nnow the value of a is %d and value of b is %d\n", a, b);
    printf(" \n");
    return 0;
}