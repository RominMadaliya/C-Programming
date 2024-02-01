
#include <stdio.h>
int main()
{
    int n;
    char a = 'A';
    printf("enter the value of n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%c", a);
            }
            if (i % 2 == 0)
            {
                printf("%c", a + 32);
            }
            a++;
        }
        printf("\n");
    }

    return 0;
}