#include <stdio.h>
int main()
{
    int n;

    printf("enter the value of N:");
    scanf("%d", &n);

    for (int i = 1, v = 1, t = n - 1; i <= n; i++, v += 2, t--)
    {
        for (int j = 1; j <= t; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= v; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 1, b = 1, v = (n * 2) - 3; i >= 1; i--, b++, v -= 2)
    {
        
        for (int j = 1; j <= b; j++)
        {
            printf(" ");
        }
        for (int i = 1; i <= v; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}