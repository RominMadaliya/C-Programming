#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int n,r,gtime=1;
    srand(time(0));
    n = rand() % 0 - 1;
    printf("%d", n);


    do
    {
        printf("guess the number :");
        scanf("%d",&r);

        if(r<n)
        {
            printf("guess the higher numeber\n ");
        }
        else if(r>n)
        {
            printf("guesst the lower number\n");
        }
        if(r==n)
        {
            printf("your guess is right , the number is %d and you gussed it in %d attempt\n",r,gtime);
        }
        gtime++;
    }while(r!=n);


















}