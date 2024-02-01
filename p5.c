
#include <stdio.h>
int main()
{
    int n,f;
    printf("enter the value of n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
       f=n;
       for (int j = 1; j <= i; j++)
        {
            printf("%d", f);
            f--;
            
         
        }
        printf("\n");
    }

    return 0;
}