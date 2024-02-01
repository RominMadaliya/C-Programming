#include <stdio.h>

void _1_1_2_1_2_3(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void _1_2_2_3_2_3(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

void _5_4_4_3_3_3(int a)
{
    for (int i = 5, v = 1; i >= 1; i--, v++)
    {
        for (int j = 1; j <= v; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

void _1_2_3_4_5_6(int a)
{
    for (int i = 1, v = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", v++);
        }
        printf("\n");
    }
}

void _5_5_4_5_4_3(int a)
{
    for (int i = 1; i <= a; i++)
    {
        int v = a;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", v--);
        }
        printf("\n");
    }
}

void _A_A_B_A_B_C(int a)
{
    for (int i = 1; i <= a; i++)
    {
        char v = 'A';
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", v++);
        }
        printf("\n");
    }
}

void _A_b_c_D_E_F(int a)
{
    char b = 'A';
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%c ", b);
            }
            else if (i % 2 == 0)
            {
                printf("%c ", b + 32);
            }
            b++;
        }
        printf("\n");
    }
}

void _a_b_C_d_E_f(int a)
{
    char b = 'a';
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 != 0)
            {
                printf("%c ", b);
            }
            else if (j % 2 == 0)
            {
                printf("%c ", b - 32);
            }
            b++;
        }
        printf("\n");
    }
}

void _A_B_C_D_E_F(int a)
{
    char b = 'A';

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", b++);
        }
        printf("\n");
    }
}

void _5_4_5_3_4_5(int a)
{
    int b = a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1, v = b; j <= i; j++)
        {
            printf("%d ", v++);
        }
        b--;
        printf("\n");
    }
}

void _1_0_1_0_1_0(int a)
{
    for (int i = 1, v = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (v % 2 != 0)
            {
                printf("1");
            }
            else if (v % 2 == 0)
            {
                printf("0");
            }
            v++;
        }
        printf("\n");
    }
}

void _A_B_A_C_B_A(int a)
{
    char b = 'A';
    for (int i = 1; i <= a; i++)
    {
        char v = b;
        for (int j = 1; j <= i; j++)
        {

            printf("%c ", v--);
        }
        printf("\n");
        b++;
    }
}

void pyramid(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void space_pyramid(int a)
{
    for (int i = 1, n = a; i <= a; i++, n--)
    {
        for (int j = 1; j <= n; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void _1_1_1_1_1(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

void _5_5_5_5_5(int a)
{
    for (int i = 1, v = 5; i <= a; i++, v--)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("%d ", v);
        }
        printf("\n");
    }
}

void _1_2_3_4_5(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void _A_A_A_A_A(int a)
{
    char b = 'A';
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {

            printf("%c ", b);
        }
        printf("\n");
        b++;
    }
}

void _2_4_6_8_10(int a)
{
    int v = 2;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("%d ", v);
        }
        v += 2;
        printf("\n");
    }
}

void _1_3_5_7_9(int a)
{
    int v = 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("%d ", v);
        }
        v += 2;
        printf("\n");
    }
}

void _1_to_n(int a)
{
    for (int i = 1, v = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("%d ", v++);
        }
        printf("\n");
    }
}

void _A_to_n(int a)
{
    char b = 'A';
    for (int i = 1, v = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("%c ", b++);
        }
        printf("\n");
    }
}

void _11_15_21_25(int a)
{
    int v = 11;
    for (int i = 1, v = 11; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("%d ", v++);
        }
        v += 5;
        printf("\n");
    }
}

void daimond_star(int n)
{
    for (int i = 1, v = 1, b = n; i <= n; i++)
    {

        if (i == 1)
        {
            for (int j = 1; j <= (n * 2) - 1; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 1; j < b; j++)
            {
                printf("*");
            }
            for (int j = 1; j <= v; j++)
            {
                printf(" ");
            }
            for (int j = 1; j < b; j++)
            {
                printf("*");
            }
            v += 2;
            b--;
        }

        printf("\n");
    }

    for (int i = n - 1, v = (n * 2) - 5, b = 2; i >= 1; i--)
    {
        if (i == 1)
        {

            for (int j = 1; j <= (n * 2) - 1; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 1; j <= b; j++)
            {
                printf("*");
            }
            for (int j = 1; j <= v; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= b; j++)
            {
                printf("*");
            }
            v -= 2;
            b++;
        }

        printf("\n");
    }
}

void daimond(int n)
{
     for ( int i = 1,v=1,b=n-1; i<=n ; i++,v+=2,b-- )
    {
       
       for ( int j = 1 ; j<=b ; j++ )
       {
        printf(" ");
       }
       
        for ( int j = 1; j<=v; j++ )
        {
            printf("*");
        }
        printf("\n");
    }

    for ( int i= 1,k=n*2-3; i<=n-1; i++,k-=2)
    {
       
        for ( int j = 1 ; j<=i ; j++ )
       {
        printf(" ");
       }

    
        for ( int j = 1; j<=k; j++ )
        {
            printf("*");
        }
        printf("\n");
    }
}

void square(int n)
{
    
    for ( int i = 1; i<=n ; i++ )
    {
        for ( int j = 1; j<=n; j++)
        {
            if(i == 1 || j == 1 || j == n || i==n)
            {
                printf("* ");
            }
          
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void _1_1_2_1(int n)
{
        for (int i = 1, v = n, t = 1; i <= n; i++, v--)
    {
        for (int j = 1; j <= v; j++)
        {
            printf(" ");
        }

        if (i == 1)
        {
            printf("%d\n", i);
        }

        else
        {
            int b = 1;
            int f = i - 1;
            for (int j = 1; j <= i; j++)
            {
                printf("%d", b++);
            }
            for (int j = 1; j <= t; j++)
            {
                printf("%d", f--);
            }

            t++;
            printf("\n");
        }
    }
}

int main(void)
{
    int n;
    printf("enter the value of n : ");
    scanf("%d", &n);

    // _1_1_2_1_2_3(n);
    // _1_2_2_3_2_3(n);
    // _5_4_4_3_3_3(n);
    // _1_2_3_4_5_6(n);
    // _5_5_4_5_4_3(n);
    // _A_A_B_A_B_C(n);
    // _A_b_c_D_E_F(n);
    // _a_b_C_d_E_f(n);
    // _A_B_C_D_E_F(n);
    // _5_4_5_3_4_5(n);
    // _1_0_1_0_1_0(n);
    // _A_B_A_C_B_A(n);
    // pyramid(n);
    // space_pyramid(n);
    // _1_1_1_1_1(n);
    // _5_5_5_5_5(n);
    // _1_2_3_4_5(n);
    // _A_A_A_A_A(n);
    // _2_4_6_8_10(n);
    // _1_3_5_7_9(n);
    // _1_to_n(n);
    // _A_to_n(n);
    // _11_15_21_25(n);
    // daimond_star(n);
    // daimond(n);
    // square(n);
     _1_1_2_1(n);
}