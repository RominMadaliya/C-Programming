#include <stdio.h>

void area_of_circle();
void area_of_square();
void area_of_rectangle();
void area_of_triangle();

int main(void)
{
    int n;
    printf("FOR AREA OF CIRCLE ENTER 1\n");
    printf("FOR AREA OF SQUARE ENTER 2\n");
    printf("FOR AREA OF RECTANGLE ENTER 3\n");
    printf("FOR AREA OF TRIAGLE ENTER 4\n");

    do
    {
        printf("\nenter the value of N : ");
        scanf("%d", &n);
        if (n < 0 || n > 5)
        {
            printf("INVALID INPUT");
        }
    } while (n < 0 || n > 5);

    if (n == 1)
    {

        area_of_circle();
    }

    else if (n == 2)
    {

        area_of_square();
    }
    else if (n == 3)
    {

        area_of_rectangle();
    }
    else if (n == 4)
    {

        area_of_triangle();
    }
}

void area_of_circle()
{
    int a;
    printf("\nenter the radius of circle: ");
    scanf("%d", &a);

    float pi = 3.14159265;
    float ans = 0;

    ans = pi * (float)a * (float)a;
    printf("the area of circle is %.2f", ans);
}

void area_of_square()
{
    int a;
    printf("\nenter the length of sqaure: ");
    scanf("%d", &a);
    float ans = 0;

    ans = (float)a * (float)a;
    printf("the area of sqaure is %.2f\n", ans);
}

void area_of_rectangle()
{
    int a, b;
    printf("\nenter the length of rectangle: ");
    scanf("%d", &a);
    printf("enter the width of rectangle: ");
    scanf("%d", &b);
    float ans = 0;

    ans = (float)a * (float)b;
    printf("the area of rectangle is  %.2f\n", ans);
}
void area_of_triangle()
{

    int a, b;
    printf("\nenter the base of triagle: ");
    scanf("%d", &a);
    printf("enter the height of triagle: ");
    scanf("%d", &b);

    float radius = 0;
    radius = ((float)a * (float)b) / 2;
    printf("the area of triagle is  %.2f\n", radius);
}