#include<stdio.h>

int main(void)
{
    FILE *ptr;
    ptr=fopen("ansh.txt","r");
int n;
   fscanf(ptr,"%d",&n);

   ptr=fopen("ansh.txt","w");
   fprintf(ptr,"%d",n*2);
   fclose(ptr);
}