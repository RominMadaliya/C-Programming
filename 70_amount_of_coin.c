#include<stdio.h>

void amount_of_coins(int a, int*b)
{
    for(int i=0; i<5; i++)
    {
        printf("%d",b[i]);
        if(i!=4){printf(",");}
    }
}

int main(void)
{
    int amount=46;
    int coins[5] = { 25,10,5,2,1};

 

    amount_of_coins(amount, coins);



}


