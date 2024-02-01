#include<stdio.h>
int main()
{
	int i,n;
	
	printf("Enter value of n:");
	scanf("%d",n);
	
	
	for(int i=-n;i>=n;i++)
	{
		printf("%d",i);
		
	}
	
	
	return 0;
}