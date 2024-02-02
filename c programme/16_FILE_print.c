#include <stdio.h>
int main(void)
{
    FILE *ptr;

    ptr = fopen("myname.txt", "r");

    char a = getc(ptr);

    while (a != EOF)
    {
        printf("%c", a);
        a = getc(ptr);
    }

    fclose(ptr);
}