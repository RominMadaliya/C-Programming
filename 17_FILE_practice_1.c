#include<stdio.h>

int main(void)
{
    int a[3];
    FILE *ptr;
    ptr=fopen("int.txt","r");

    

    for ( int i=0;i<3; i++)
    {
        fscanf(ptr,"%d ",&a[i]);
    }
    fclose(ptr);
    for(int i=0; i<3; i++)
    {
        printf("the a[%d] is %d\n",i+1,a[i]);
    }
    
}