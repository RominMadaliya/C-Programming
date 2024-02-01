#include<stdio.h>
int main()
{
	int i,n;
	
	printf("Enter value of n:");
	scanf("%d",n);
	
	
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		printf("%d\n ",i);
		}
	}
	
	
	return 0;
}