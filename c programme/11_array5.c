// given array total elements sum.
#include<stdio.h>
int main()
{
int sum=0;
int n[6] = {15,26,32,34,59,66};

for(int i=0; i<6; i++ )
{
  
        sum+=n[i];
}

printf("the sum is %d",sum);

return 0;

}