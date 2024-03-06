#include <stdio.h>

void simple_interest();
void gst_netbill();
void swapping_value_2();
void swapping_value_3();

int main(void)
{
    swapping_value_3();
    gst_netbill();
}

void simple_interest()
{
    int p, r, t;

    printf("enter the intial amount : ");
    scanf("%d", &p);
    printf("enter the interest rate : ");
    scanf("%d", &r);
    printf("enter the duration in months : ");
    scanf("%d", &t);

    float interest = 0;
    interest = (float)p * (1 + ((float)r / 100) * ((float)t / 12)) - (float)p;
    printf("the interest is %.2f", interest);
}

void gst_netbill()
{
    int rate, qty, amt;
    float discount = 0, bill_amount = 0, gst = 0, netbill = 0;

    printf("enter the rate of prouduct : ");
    scanf("%d", &rate);

    printf("enter the quntity of prouduct : ");
    scanf("%d", &qty);

    amt = rate * qty;
    discount = (amt * 5 / 100);

    bill_amount = amt - discount;
    gst = ((float)bill_amount * 8 / 100);
    netbill = bill_amount + gst;

    printf("RATE  QUANTITY  AMOUNT  DISCOUNT  BILL_AMOUNT    GST     NETBILL\n");
    printf("%d\t%d\t%d\t%.2f\t   %.2f\t%.2f\t%.2f", rate, qty, amt, discount, bill_amount, gst, netbill);
}

void swapping_value_2()
{
    int a, b;

    printf("enter the value of a : ");
    scanf("%d", &a);

    printf("enter the value of b : ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("now the value of a is %d and value of b is %d", a, b);
}
void swapping_value_3()
{
    int a, b;

    printf("enter the value of a : ");
    scanf("%d", &a);

    printf("enter the value of b : ");
    scanf("%d", &b);

    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("now the value of a is %d and value of b is %d", a, b);
}