#include<stdio.h>
int main(void){
    int n[2][2];
    int sum=0;
    for ( int  i = 0; i<2; i++)
    {
        for ( int j = 0; j<2; j++)
        {
            printf("enter the value n[%d][%d] : ",i,j);
            scanf("%d",&n[i][j]);
            sum+=n[i][j];
            
        }
    }
    printf("the total is %d",sum);
}