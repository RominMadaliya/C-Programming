#include <stdio.h>

float area_of_circle();
float area_of_square();
float area_of_rectangle();
float area_of_triangle();

int main(void)
{
    int n;

    printf("If you want to find area of circle enter 1\n");
    printf("If you want to find area of square enter 2\n");
    printf("If you want to find area of rectangle enter 3\n");
    printf("If you want to find area of triangle enter 4\n");

    printf("enter the value of n : ");
    scanf("%d", &n);

    float ans = 0;

    if (n == 1)
    {
        ans = area_of_circle();
    }
    else if (n == 2)
    {
        ans = area_of_square();
    }
    else if (n == 3)
    {
        ans = area_of_rectangle();
    }
    else if (n == 4)
    {
        ans = area_of_triangle();
    }

    printf("the answer is %.2f", ans);
}

float area_of_circle()
{
    int a;
    printf("\nenter the radius of circle: ");
    scanf("%d", &a);

    float pi = 3.14159265359;

    float ans = (pi * (float)a * (float)a);
    return ans;
}

float area_of_square()
{
    int a;
    printf("\nenter the length of sqaure: ");
    scanf("%d", &a);
    float ans = 0;

    ans = (float)a * (float)a;
    return ans;
}

float area_of_rectangle()
{
    int a, b;
    printf("\nenter the length of rectangle: ");
    scanf("%d", &a);
    printf("enter the width of rectangle: ");
    scanf("%d", &b);
    float ans = 0;

    ans = (float)a * (float)b;
    return ans;
}

float area_of_triangle()
{

    int a, b;
    printf("\nenter the base of triagle: ");
    scanf("%d", &a);
    printf("enter the height of triagle: ");
    scanf("%d", &b);

    float radius = 0;
    radius = ((float)a * (float)b) / 2;
    return radius;
}