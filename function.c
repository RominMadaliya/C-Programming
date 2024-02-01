#include<stdio.h>


void circle_area()
{
	int r;
	float pi=3.14159265359,c;

	printf("Enter value of r:");
	scanf("%d",&r);

	c=((float)pi*r*r);

	printf("The area of circle is %.2f\n\n",c);
}

void squre_area()
{
	int length,c;
	

	printf("Enter value of length:");
	scanf("%d",&length);

	c=length*length;

	printf("The area of circle is %d\n\n",c);
}

void rectgangle_area()
{
	int length,height,c;
	

	printf("Enter value of length:");
	scanf("%d",&length);
	printf("Enter value of height:");
	scanf("%d",&height);

	c=length*height;

	printf("The area of rectangle is %d\n\n",c);
}


void trianglr_area()
{
	int length,height,c;
	

	printf("Enter value of length:");
	scanf("%d",&length);
	printf("Enter value of height:");
	scanf("%d",&height);

	c=(length*height)/2;

	printf("The area of triangle is %d\n\n",c);
}

void simple_intrest()
{
	float p,r,si,n;
	

	printf("Enter value of Principle:");
	scanf("%f",&p);
	printf("Enter value of Rate:");
	scanf("%f",&r);
	printf("Enter value of Year:");
	scanf("%f",&n);

	si=(p*r*n)/100;

	printf("The Simple Intrest is %.2f\n++\n",si);
}


void gst()
{
    int rate,qty,amt;
    float gst,net_bill,dis,bill_amt;
    
    printf("Enter the rate:");
    scanf("%d",&rate);
    printf("Enter the quntaty:");
    scanf("%d",&qty);
    
    amt=rate*qty;
    
    dis=(amt*5)/100;
    bill_amt=amt-dis;
    gst=(bill_amt*18)/100;
    net_bill=bill_amt+gst;
    
    printf("Rate\tQuantaty\tAmount\t\tDiscount\tBill_Amount\tgst18%%\t\tNet_Bill\n");
    printf("%d \t   %d         \t%d \t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t",rate,qty,amt,dis,bill_amt,gst,net_bill);
    
}

void swap_variable_with()
{
    int a,b,c;
    
    printf("Enter value of a:");
    scanf("%d",&a);
    
    printf("Enter value of b:");
    scanf("%d",&b);
    
    c=a;
    a=b;
    b=c;
    printf("Value of a is : %d \n",a);
    printf("Value of a is : %d \n",b);
    
}


void swap_variable_without()
{
    int a,b,c;
    
    printf("Enter value of a:");
    scanf("%d",&a);
    
    printf("Enter value of b:");
    scanf("%d",&b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Value of a is : %d \n",a);
    printf("Value of a is : %d \n",b);
    
}

void small()
{
    int a,b;
    
    printf("Enter value of a:");
    scanf("%d",&a);
    
    printf("Enter value of b:");
    scanf("%d",&b);
    
    if(a<b)
    {
        printf("A is small");
    }
    else
    {
        printf("B is small");
    }
}

void positive_negative()
{
    int a;
    
    printf("Enter value of a:");
    scanf("%d",&a);
    
    if(a>0)
    {
        printf("The given number is positive");
    }
    else if(a<0)
    {
        printf("The given number is Negative");
    }
    else
    {
        printf("The given number is zero");
    }
}

void divisible_5()
{
    int a;
    
    printf("Enter value of a:");
    scanf("%d",&a);
    
    if(a%5==0)
    {
        printf("The given number is Divisible by  5");
    }
    else
    {
         printf("The given number is not Divisible by  5");
    }
}

void divisible_5_3()
{
    int a;
    
    printf("Enter value of a:");
    scanf("%d",&a);
    
    if(a%5==0)
    {
        if(a%3==0)
        {
        printf("The given number is Divisible by  5 and 3");
        }
        else
        {
        printf("The given number is not Divisible by  5 and 3");
        }
    }
}

void student_pass_fail()
{
    int a;
    
    printf("Enter student marks:");
    scanf("%d",&a);
    
    if(a>=35)
    {
        printf("The student is pass");
    }
    else
    {
        printf("The student is fail");
    }
}
 
 
void leap_year()
{
    int year;
    
    printf("Enter year:");
    scanf("%d",&year);
    
    if(year%4==0&&year%400==0||year%100!=0)
    {
        printf("The Given Number is leap year:");
        
    }
    else
    {
         printf("The Given Number is leap year:");
    }
}
    


void largest()
{
    int a,b,c;
    
    printf("Enter value of a:");
    scanf("%d",&a);
    
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    
    if(a>b)
    {
        if(a>c)
        {
            printf("A is Largest");
        }
        else
        {
            printf("C is Largest");
        }
    }
    else
    {
        if(b>c)
        {
             printf("B is Largest");
        }
        else
        {
            printf("C is Largest");
        }
    }
    
    
}


void nto1()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    
    for(int i=n;i>=1;i--)
    {
        printf("%d ",i);
    }
    
}

void oneton()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    
}

void negative_to_positve()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    
    for(int i=-n;i<=n;i++)
    {
        printf("%d ",i);
    }
    
}


void odd_even()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
        printf("%d \n",i);
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
        printf("%d \n",i);
        }
    }
}


void A_Z()
{
    for(int i=65;i<=90;i++)
    {
        
        {
        printf("%c\n",i);
        }
    }
}

void A65_Z90()
{
    for(int i=65;i<=90;i++)
    {
        
        {
        printf("%c-%d\n",i,i);
        }
    }
}

void Aa_Zz()
{
    for(int i=65;i<=90;i++)
    {
        
        {
        printf("%c-%c\n",i,i+32);
        }
    }
}


void totalsum()
{
    int n,sum=0,sum1=0;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
        printf("%d ",i);
        sum+=i;
        }
    }
     printf(" = %d ",sum);
     printf("\n");
     for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
        printf("%d",i);
        sum1+=i;
        }
    }
    
   
    printf(" = %d ",sum1);
}

void _1_4_9()
{
    int n;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
       
        printf("%d ",i*i);
    }
}


void _1_4_3_16()
{
    int n;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
       if(i%2==0)

    {
        printf("%d ",i*i);
    }
    else{
        printf("%d ",i);
    }
    }
}

void _1_2_4_8()
{
    int n;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    for(int i=1,v=1;i<=n;i++)
    {
        printf("%d ",i);
        v*=2;
        
}
}


void _1_4_12_32_80()
{
    int n,a=1;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    for(int i=1,v=1;i<=n;i++)
    {
        printf("%d ",i*a);
        a+=a;
        
}
}

void _1_1_2_3_5()
{
    int n,c=1,a=0,b=1;
    
    printf("Enter the number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
      
        printf("%d ",c);
         c=a+b;
        a=b;
        b=c;
        
        }
}


void A_C_E_G()
{
    
    for(int i=65;i<=90;i++)
    {
        if(i%2!=0)
        {
        printf("%c ",i);
        
        }
}
}

void _05_1_25_5()
{
    int n;
    float a=0.5,b=0.5,c;

    printf("Enter The Number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("%.1f",b);
       b+=a;
       a+=1;
    }

    
}

void A_c_E_g()
{
    for(int i=65;i<=90;i++)
    {   
        if(i%2==1)
        {
            if(i%4==1)
            {
                printf("%c ",i);
            }
            else {
                printf("%c ",i+32);
            }
        }
    }
}


int main(void)
{	

    int n;
    printf("enter the value on n : ");
    scanf("%d",&n);
if(n==1)
{
circle_area();
}
else if(n==2){
	squre_area();
    }
	else if(n==3){
	rectgangle_area();
    }
    else if(n==4){
	trianglr_area();
    }
    else if(n==5){
	simple_intrest();
    }
    else if(n==6){
gst();
    }
else if(n==7){
swap_variable_with();
}
else if(n==8){
swap_variable_without();
}
else if(n==9){
small();
}
else if(n==10){
positive_negative();
}
else if(n==11){
divisible_5();
}
else if(n==12){
divisible_5_3();
}
else if(n==13){
student_pass_fail();
}
else if(n==14){
leap_year();
}
else if(n==15){
largest();
}
else if(n==16){
nto1();
}
else if(n==17){
oneton();
}
else if(n==18){
negative_to_positve();
}
else if(n==19){
odd_even();
}
else if(n==20){
A_Z();
}
else if(n==21){
A65_Z90();
}
else if(n==22){
Aa_Zz();
}
else if(n==23){
totalsum();
}
else if(n==24){
_1_4_9();
}
else if(n==25){
_1_4_3_16();
}
else if(n==26){
_1_2_4_8();
}
else if(n==27){
_1_4_12_32_80();
}
else if(n==28){
A_C_E_G();
}
else if(n==29){
_1_1_2_3_5();
}
else if(n==30){
_05_1_25_5();
}
else if(n==31){
A_c_E_g();
}
}