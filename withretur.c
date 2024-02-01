#include <stdio.h>
float circle_area();
int main(void)
{
    float n = 0;
    n = circle_area();
    printf("The area of the circle is: %.2f\n", n);
}

float circle_area()
{
    int r;
    float pi = 3.14159265359, c = 0;

    printf("Enter circle area:");
    scanf("%d", &r);

    c = pi * (float)r * (float)r;

    return c;
}