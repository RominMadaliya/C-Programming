#include <stdio.h>

#define N 2

typedef struct product

{
    char name[20];
    int qty;
    int rate;
    int bill_amount;
    float gst;
}pro;

void print(pro product[]);

int main(void)
{
 

pro product[N];


for ( int i=0; i<N; i++)
{
printf("enter the name of product : ");
gets(product[i].name);
printf("enter the qty of product : ");
scanf("%d",&product[i].qty);
printf("enter the rate of product : ");
scanf("%d",&product[i].rate);
getchar();
}





print(product);



}



void print(pro product[])
{

    for  ( int i=0; i<N; i++)
    {
        int bill_amount=product[i].rate*product[i].qty;
        float gst = ((float) bill_amount * 18)/100;
        printf("\nThe name of product is %s\n",product[i].name);
        printf("The Quntity of product is %d\n",product[i].qty);
        printf("The rate of proudct is %d\n",product[i].rate);
        printf("The Bill amount of product is %d\n", bill_amount);
        printf("The total GST is %.2f\n",gst);


    }
}