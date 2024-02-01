#include <stdio.h>
int main()
{

    int n;
    printf("enter the value of N:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("* ");
            }
        }
        else
        {
            printf("*");
            for( int i=1;i<=(n*2)-3;i++)
            {
                printf(" ");
            }
             printf("* ");
        }
        printf("\n");
    }

    return 0;
}