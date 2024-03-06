#include<stdio.h>

void add(int*a)
{
    a[2]=7;
}


int main()
{
    int array[5]={1,2,3,4,5};

    add(array);
    for(int i=0;i<5;i++)
    {
    printf("%d",array[i]);
    }



}