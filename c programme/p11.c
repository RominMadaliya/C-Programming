
#include <stdio.h>
int main()
{
    int n,b;
    printf("enter the value of n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
   b=n;
        for (int j = 1; j <= i; j++)
        {
         
       printf("%d",b-i+1);
       b++;
        }
        printf("\n");
    }

    return 0;
}
