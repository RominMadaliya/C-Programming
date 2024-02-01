#include<stdio.h>

int main(void)
{
   char e1[20],e2[20];
   int s1,s2;

    printf("enter the name of first emplyee : ");
    gets(e1);
    printf("enter the salary of first employee : ");
    scanf("%d",&s1);
    getchar();
    printf("enter the name of second emplyee : ");
    gets(e2);
    printf("enter the slary of second employee : ");
    scanf("%d",&s2);

    FILE *ptr;
    ptr=fopen("detail.txt","w");

    fprintf(ptr,"%s, %d \n",e1,s1);
    fprintf(ptr,"%s, %d  \n",e2,s2);
    fclose(ptr);


}