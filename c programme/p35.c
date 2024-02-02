#include<stdio.h>
int main()
{
    int n;
   
    printf("enter the value of n:");
    scanf("%d",&n);
int i=1;
while(i<=n)
{
int j=1;
 char v='A';
while(j<=i)
{
    printf("%c",v);
    v++;
    j++;
}
printf("\n");
i++;
}
    
}