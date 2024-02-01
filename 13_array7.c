#include<stdio.h>
int main(void){
    int n[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   
    for ( int  i = 0; i<3; i++)
    {
        for ( int j = 0; j<3; j++) 
        {
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }
    printf("the diagonal elements sum is %d\n",n[0][0]+n[1][1]+n[2][2]);
    printf("the upper trigle elements sum is %d\n",n[0][1]+n[0][2]+n[1][2]);
    printf("the lower trigle elements sum is %d\n",n[1][0]+n[2][0]+n[2][1]);
  
}