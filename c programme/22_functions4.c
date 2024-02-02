#include <stdio.h>

void s_10_to_10();
void s_51_to_99();
void s_1_to_n();
void s_n_to_1();
void s_n_to_n();
void n_odd();
void n_even();
void A_Z();
void A_65();
void A_a();
void sum_n();
void sum_odd();
void sum_even();
void s_1_4_9_16();
void s_1_4_3_16_5();
void s_1_2_4_8_16();
void s_1_4_12_32_80();
void A_C_E_G_L();
void s_1_1_2_3_5();
void s_point();
void A_c_E_g_L();

int main(void)
{
    // s_10_to_10();
    // s_51_to_99();
    // s_1_to_n();
    // s_n_to_1();
    // s_n_to_n();
    // n_odd();
    // n_even();
    // A_Z();
    // A_65();
    // A_a();
    // sum_n();
    // sum_odd();
    // sum_even();
    // s_1_4_9_16();
    // s_1_4_3_16_5();
    // s_1_2_4_8_16();
    // s_1_4_12_32_80();
    // A_C_E_G_L();
    // s_1_1_2_3_5();
    // s_point();
    // A_c_E_g_L();
}

void s_10_to_10()
{
    int a = 10;

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", a);
        a--;
    }
}

void s_51_to_99()
{
    int a = 51;
    int b = 99;

    for (int i = 1; a <= b; i++)
    {
        printf("%d\n", a);
        a++;
    }
}

void s_1_to_n()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
}

void s_n_to_1()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }
}

void s_n_to_n()
{
    int first, last;

    printf("enter the first value : ");
    scanf("%d", &first);

    printf("enter the last value : ");
    scanf("%d", &last);

    if (first < last)
    {
        for (int i = 1; first <= last; i++)
        {
            printf("%d\n", first++);
        }
    }
    else
    {
        for (int i = 1; first >= last; i++)
        {
            printf("%d\n", first--);
        }
    }
}

void n_odd()
{
    int n;
    printf("enter the value of N : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}

void n_even()
{
    int n;
    printf("enter the value of N : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}

void A_Z()
{
    char a = 'A';
    for (int i = a; a <= 'Z'; a++)
    {
        printf("%c\n", a);
    }
}

void A_65()
{
    char a = 'A';
    for (int i = a; a <= 'Z'; a++)
    {
        printf("%c-%d\n", a, a);
    }
}

void A_a()
{
    char a = 'A';
    for (int i = a; a <= 'Z'; a++)
    {
        printf("%c-%c\n", a, a + 32);
    }
}

void sum_n()
{
    int n;
    int sum = 0;
    printf("enter the value of n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        sum += i;
    }

    printf("the sum of first %d natural numbers is %d", n, sum);
}

void sum_odd()
{
    int n;
    printf("enter the value of N : ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1, v = 1; i <= n; i++)
    {

        sum += v;
        v += 2;
    }

    printf("the sum of first %d odd numbers is %d", n, sum);
}

void sum_even()
{
    int n;
    printf("enter the value of N : ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1, v = 2; i <= n; i++)
    {

        sum += v;
        v += 2;
    }

    printf("the sum of first %d even numbers is %d", n, sum);
}

void s_1_4_9_16()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d", i * i);
        if (i != n)
        {
            printf(",");
        }
    }
}

void s_1_4_3_16_5()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i * i);
        }
        else
        {
            printf("%d", i);
        }
        if (i != n)
        {
            printf(",");
        }
    }
}

void s_1_2_4_8_16()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d", &n);

    for (int i = 0, v = 1; i < n; i++)
    {
        printf("%d", v);
        v *= 2;
        if (i != n - 1)
        {
            printf(",");
        }
    }
}

void s_1_4_12_32_80()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d", &n);

    for (int i = 1, v = 1; i <= n; i++)
    {

        printf("%d", v * i);
        v *= 2;
        if (i != n)
        {
            printf(",");
        }
    }
}

void A_C_E_G_L()
{
    int n;
    char a = 'A';
    printf("enter the value of n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%c", a);
        a += 2;
        if (i != n)
        {
            printf(",");
        }
    }
}

void s_1_1_2_3_5()
{
    int n, first = 0, second = 1, next = 1;
    printf("enter the value of n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        printf("%d", next);
        next = first + second;
        first = second;
        second = next;

        if (i != n)
        {
            printf(",");
        }
    }
}

void s_point()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d", &n);

    float v = 0.5;
    float y = 0.5;

    for (int i = 1; i <= n; i++)
    {
        printf("%.2f", v);
        v += y;
        y += 1;
        if (i != n)
        {
            printf(",");
        }
    }
}

void A_c_E_g_L()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d", &n);

    char a = 'A';

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%c", a + 32);
        }
        else
        {
            printf("%c", a);
        }
        if (i != n)
        {
            printf(",");
        }

        a += 2;
    }
}