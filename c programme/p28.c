#include <stdio.h>

int main()
{

    int n;
    float first=0.5,second=0.5;

    printf("enter the value of n:");
    scanf("%d", &n);

    int i=1;

    do{
                printf("%.2f,",first);
                first+=second;
                second+=1;
                
                i++;

    }while(i<=n);
}