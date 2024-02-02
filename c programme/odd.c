#include<stdio.h>
int main()
{
	int i,n;
	
	printf("Enter value of n:");
	scanf("%d",n);
	
	
	for(int i=n;i>=50;i++)
	{
		if(i%2==1)
		{
		printf("%d",i);
		}
	}
	
	
	return 0;
}