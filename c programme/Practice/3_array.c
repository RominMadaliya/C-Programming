#include<stdio.h>

int main()
{
int a1[5];
int a2[6];
int a3[20];

for(int i=0;i<5;i++)
{
    printf("Enter the a1[%d] element :",i+1);
    scanf("%d",&a1[i]);

}
for(int i=0;i<6;i++)
{
    printf("Enter the a2[%d] element :",i+1);
    scanf("%d",&a2[i]);

}

printf("---------------------------------------------");

for(int i=0;i<5;i++)
{
    printf("\nEnter the a1[%d] element is %d:",i+1,a1[i]);

}
for(int i=0;i<6;i++)
{
    printf("\nEnter the a2[%d] element is %d:",i+1,a2[i]);

}

printf("-----------------------------------------");

for(int i=0;a1[i]!='\0';i++)
{
    a3[i]=a1[i];
}

for(int i=0;i<6;i++)
{
    printf("\nEnter the a3[%d] element is %d:",i+1,a2[i]);

}

}
