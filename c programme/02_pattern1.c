#include <stdio.h>
int main(void)
{

    const int n;

    printf("enter the value of N:");
    scanf("%d", &n);

    for (int i1 = 1, a = n - 1, v = 1; i1 <= n; i1++)
    {
        if (i1 == 1)
        {
            for (int i2 = 1; i2 <= (n * 2) - 1; i2++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int n3 = a; n3 >= 1; n3--)
            {
                printf("*");
            }
            for (int n4 = 1; n4 <= v; n4++)
            {
                printf(" ");
            }
            a--;
            v += 2;
            for (int n5 = a + 1; n5 >= 1; n5--)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    for (int i = n - 1, t = 2, v = n * 2 - 5; i >= 1; i--)
    {
        if (i == 1)
        {
            for (int i2 = 1; i2 <= (n * 2) - 1; i2++)
            {
                printf("*");
            }
            printf("\n");
        }

        else
        {
            for (int i3 = 1; i3 <= t; i3++)
            {
                printf("*");
            }

            for (int i5 = v; i5 >= 1; i5--)
            {
                printf(" ");
            }

            for (int i6 = 1; i6 <= t; i6++)
            {  
                printf("*");
            }
            t++;

            v -= 2;
            printf("\n");
        }
    }
}