// write a progrma to read a text file character by character and write its content twice in a seprate file.
#include <stdio.h>

int main(void)
{
    FILE *ptr;
    ptr = fopen("myname1.txt", "r");


    FILE *ptr2;

    ptr2 = fopen("myname2.txt", "w");
   
   int i=0;
   
    while(i!=2){
        char c=fgetc(ptr);
        while (c != EOF)
        {
            fprintf(ptr2, "%c", c);
           
            c = fgetc(ptr);
        }
        printf("\n");
        rewind(ptr);
        i++;
    }

    fclose(ptr);
    fclose(ptr2);
}