#include<stdio.h>f
int main(void){
    int n[3][3]={{1,2,3},{0,5,6},{0,7,8}};
   
    for ( int  i = 0; i<3; i++)
    {
        for ( int j = 0; j<3; j++) 
        {
            if(n[i][j]==0)
            {
                printf("  ");
            }
            else
            {
            printf("%d ",n[i][j]);
            }
        }
        printf("\n");
    }
}