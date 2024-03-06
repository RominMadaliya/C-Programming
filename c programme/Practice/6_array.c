#include<stdio.h>
int main()
{
    int a[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&a[i]);
        
    }

    for(int i=2;i>=0;i--)
    {
        int j=0;
        printf(" \nthe %d element is %d",j+1,a[i]);
        j++;
        
    }
}