// fopen();
// fclose();
// fscanf();
// fprintf();


//  r  rb  w  wb  a

#include<stdio.h>

int main(void)
{
    int num;

    printf("enter the numeber you want multiplication table of : ");
    scanf("%d",&num);

        FILE*ptr;

        ptr = fopen("recursion.txt","w");

    for ( int i=0; i<10; i++)
    {
       fprintf(ptr,"%d X %d = %d\n",num,i+1,num*(i+1));
    }

    fclose(ptr);

    // for ( int i=0; i<9; i++)
    // {
    //     printf(" the value of %d elements is %d\n",i+1,num[i]);
    // }

    printf("the multiplication table of %d is completed",num);

}