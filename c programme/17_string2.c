#include <stdio.h>
int main(void)

{
    char n[100];
    int count = 0;
    int r[100];

    printf("enter the name: ");
    gets(n);

    for (int i = 0; n[i] != '\0'; i++)
    {
        count++;
    }
    // printf("%d\n",count);
    int h = count - 1;

    for (int i = 0; h >= 0; i++)
    {
        r[i] = n[h];
        h--;
    }
   
   for (int i = 0; i<count; i++)
    {
       printf("%c",r[i]);
    }


}