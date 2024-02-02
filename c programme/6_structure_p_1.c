#include <stdio.h>
#include <string.h>

struct coder_private
{
   char name[100];
   int salary;
   int age;
};

int main(void)
{

   struct coder_private e[3];

   for (int i = 0; i < 3; i++)
   {
      printf("\nenter the name : ");
      fgets(e[i].name, 100, stdin);
      printf("\nenter the salary : ");
      scanf("%d", &e[i].salary);
      getchar(); // it wait for user to enter sigle character and continue execution of program
      printf("\nenter the age : ");
      scanf("%d", &e[i].age);
      getchar();
   }

   for (int i = 0; i < 3; i++)
   {
      printf("\nthe employee : %d\n", i);
      printf("the name of the employee is %s", e[i].name);
      printf("the salary of enployee is %d\n", e[i].salary);
      printf("the age of employeeis %d", e[i].age);
   }
}