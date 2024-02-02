#include <stdio.h>
#include<math.h>

sizef
int perfect(int a)
{
    int sum = 0;

    for (int i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {

            sum += i;
        }
    }
    
    return (sum==a);
}

int main(void)
{
    int n;

    printf("enter the number : ");
    scanf("%d", &n);

    int a = perfect(n);
    printf("%d\n", a);
    if (a)
    {
        printf("%d is a perfect number", n);
    }
    else
    {
        printf("%d is not a perfect number", n);
    }
}