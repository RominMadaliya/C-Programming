#include <stdio.h>
int main()
{
    int n;
    char v = 'A';
    printf("enter the value of n:");
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            if (i % 2 != 0)
            {
                printf("%c", v);
            }
            else
            {
                printf("%c", v + 32);
            }

            v++;
            j++;
        }
        printf("\n");
        i++;
    }
}