#include<stdio.h>

int main()
{
    int arr[10];
    int count=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n\n",count);
    for(int i=0;i<count;i++)
    {
        printf("Eneter the array[%d] ELement :",i);
        scanf("%d",&arr[i]);
    }
    printf("-----------------------");
    for(int i=count-1;i>=0;i--)
    {
        printf("\nElements in array[%d] is:%d",i,arr[i]);
    }
    return 0;
}