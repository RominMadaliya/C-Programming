#include <stdio.h>

int main()
{

    int n;
    char a = 'A';

    printf("enter the value of n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        printf("%c\n", a);

        a += 2;
    }
}
