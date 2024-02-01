//multiplication table 

#include<stdio.h>
int main(void)
{
    int n; 
    printf("enter the number you want multiplication table of : ");
    scanf("%d",&n);

    FILE *ptr;

    ptr=fopen("table.txt","w");

    for(int i=1; i<=10; i++)
    {
    fprintf(ptr,"%d X %d = %d\n",n,i,n*i);
    }

    fclose(ptr);
    printf("the table of %d is succesfully generated",n);
}