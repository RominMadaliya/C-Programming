#include<stdio.h>
int main(void)

{

    int n;
    printf("Enter the number you want to table:");
    scanf("%d",&n);

    FILE*ptr;

    ptr = fopen("romin.txt","w");

    for ( int i=0; i<10; i++)
    {
       fprintf(ptr,"%d X %d = %d\n",n,i+1,n*(i+1));
    }
    fclose(ptr);  
}

