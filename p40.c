
#include <stdio.h>
int main()
{
    int n;

    printf("enter the value of n:");
    scanf("%d", &n);
    int i = 1;
    int v = 1;
    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {

            if (v % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }

            v++;
            j++;
        }

        printf("\n");
        i++;
    }
}