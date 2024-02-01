#include <stdio.h>
int main(void)
{
    int count = 0;
    char n[100];
    printf("enter the name: ");
    gets(n);

    for (int i = 0; n[i] != '\0'; i++)
    {
        count++;
    }

    printf("the number of characters in string is %d",count);
}