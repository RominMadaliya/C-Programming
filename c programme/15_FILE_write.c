#include<stdio.h>

int main(void)
{
    FILE *ptr;

    ptr=fopen("write.txt","w");

    fprintf(ptr,"I am writeing in another file--- ");
    fclose(ptr);
}