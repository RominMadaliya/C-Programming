// creat an array of 5 complex numbers then display with the help of display function. the values must be,
// taken by user as a input.

#include <stdio.h>

typedef struct complex
{
    int real;
    int img;
} cmp;

void display(cmp cm[]);

int main(void)
{
    cmp cm[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nenter the value of cm[%d] real num : ", i + 1);
        scanf("%d", &cm[i].real);
        printf("enter the value of cm[%d] img num :  ", i + 1);
        scanf("%d", &cm[i].img);
    }


    display(cm);
}


    void display(cmp cm[])
{
    for(int i=0;i<5; i++)
    {
    printf("\nthe value of cm[%d] real num is %d\n",i+1,cm[i].real);
    printf("the value of cm[%d] img num is %d\n",i+1,cm[i].img);
    }
}