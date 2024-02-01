#include <stdio.h>
#include <string.h>

typedef  struct coder
{
    int number;
    char name[20];
    int age;
}cd;

int main(void)
{
    //     struct coder coder1={33,"anshchovatiya",34};
    //     printf("%d",coder1.number);
    //     puts(coder1.name);
    //     printf("%d",coder1.age);

   cd coder1;
   cd*b=&coder1;
    
    // (*b).number=32;
    b->number=33;
    printf("the number is %d",coder1.number);

}