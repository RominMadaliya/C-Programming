
#include <stdio.h>
int main()
{
    int n;
    char a='A';
    printf("enter the value of n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
       a='A';
       for (int j = 1; j <= i; j++)
        {
            printf("%c", a);
            a++;
            
         
        }
        printf("\n");
    }

    return 0;
}