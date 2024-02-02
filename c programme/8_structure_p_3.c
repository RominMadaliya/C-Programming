#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char name[20];
    int age;
    char gender;
} emp;

void show(emp employee1)
{
    printf("the name of employee 1 is %s\n", employee1.name);
    printf("the age of employee 1 is %d\n", employee1.age);
    printf("the gender of employee 1 is %c\n", employee1.gender);
}

int main(void)
{
    emp employee1;
    printf("enter the employee name: ");
    gets(employee1.name);
    printf("enter the employee age: ");
    scanf("%d", &employee1.age);
    getchar();
    printf("enter the employee gender: ");
    scanf("%c", &employee1.gender);

    show(employee1);
}