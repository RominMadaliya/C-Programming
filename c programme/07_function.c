#include <stdio.h>

int swipe(int *a, int *b);

int main()
{
    int a, b;

    printf("enter the value of n[0]:");
    scanf("%d", &a);
    printf("enter the value of n[1]:");
    scanf("%d", &b);

    swipe(&a, &b);
    printf("after swipe the value of a is %d and value of b is %d", a, b);

    return 0;
}

int swipe(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}