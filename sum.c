#include<stdio.h>
int main()
{

int n,sum=0;

printf("enter the value of n:");
scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		sum+=i;
        printf("%d\n",i);
		
	}
	printf(" the sum is %d ",sum);
	
	return 0;
}