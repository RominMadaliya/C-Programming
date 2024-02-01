#include <stdio.h>
int main(void)
{
    int n;

    printf("enter the value of n:");
    scanf("%d", &n);

    for (int i = 1, v = n, m=1; i <= n; i++, v--,m++)
    {
        for (int j = 1; j <= v; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        if (i >= 2)
        {
            int  h=1+m-2;
            for (int j = 1; j < i; j++)
            {
                printf("%d", h--);
            }
            h++;
        }

        printf("\n");
    }
}