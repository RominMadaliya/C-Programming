#include <stdio.h>
int main()
{

    int n;
    int v = 1;

    printf("enter the value of n:");

    scanf("%d", &n);

    int i = 1;

    while (i <= n)

    {

        printf("%d,", v * i);

        v += v;

        i++;
    }
}
