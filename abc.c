//10 to 1
#include<stdio.h>
int main()
{
	int i;
	
	for(int i=10;i>=1;i--)
	{
		printf("%d",i);
		
	}
	
	
	return 0;
}

// 51 to 99
#include<stdio.h>
int main()
{
	int i;
	
	for(int i=51;i<=99;i++)
	{
		printf("%d",i);
		
	}
	
	
	return 0;
}

//n print 1 to n
#include<stdio.h>
int main()
{
	int i,n;
	
	printf("Enter value of n:");
	scanf("%d",n);
	
	
	for(int i=1;i<=n;i++)
	{
		printf("%d",i);
		
	}
	
	
	return 0;
}

//n print n to 1
#include<stdio.h>
int main()
{
	int i,n;
	
	printf("Enter value of n:");
	scanf("%d",n);
	
	
	for(int i=n;i>=1;i--)
	{
		printf("%d",i);
		
	}
	
	
	return 0;
}


//n print -n to n
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


// odd no up to 50

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