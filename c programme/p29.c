#include <stdio.h>

int main()
{

    int n;

    char c = 'A';

    printf("enter the value of n:");
    scanf("%d", &n);

    int i = 1;
    do
    {
    
        printf("%c,",c);
    
       c+=2;

       printf("%c,",c+32);
       c+=2;
       
       
       
        i++;
    } while (i <= n);
}