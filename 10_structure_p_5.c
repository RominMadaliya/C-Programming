#include <stdio.h>
#include<conio.h>


typedef struct bank_account
{
    long long int account_number;
    char name[30];
    int age;
    char gender;
    char birth_date[10];

} user;


void display(user u1)
{
    printf("\nThe bank account number is %lld\n",u1.account_number);
    printf("The name of user is %s\n",u1.name);
    printf("The age of user is %d\n",u1.age);
    printf("The gender of user is : '%c\n'",u1.gender);
    printf("the birth date of user is %s\n",u1.birth_date);

}




int main(void)
{

    user u1;

    printf("\nEnter the account number : ");
    scanf("%lld", &u1.account_number);
     getchar();
    printf("Enter the user name : ");
    gets(u1.name);
    printf("Enter the age : ");
    scanf("%d", &u1.age);
    getchar();
    printf("Enter the gender : ");
    scanf("%c", &u1.gender);
    getchar();
    printf("Enter the birth date : ");
    gets(u1.birth_date);


    display(u1);
}