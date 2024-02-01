#include<stdio.h>

typedef struct Date_1
{
    int day;
    int month;
    int year;
} Date;

void display(Date date[])
{
    for(int i=0;i<2;i++)
    {
    printf("\nthe  date is %d/%d/%d\n",date[i].day,date[i].month,date[i].year);
    }
}

void check(Date date[])
{
    
    if(date[0].day==date[1].day&&date[0].month==date[1].month&&date[0].year==date[1].year)
    {
        printf("\nthe date is same ");
    }
    
   


   else if(date[0].year>date[1].year)
    {
        printf("%d/%d/%d is a bigger date1",date[1].day,date[1].month,date[1].year);
    }
    else if (date[0].year<date[1].year)
    {
        printf("%d/%d/%d is a bigger date1",date[0].day,date[0].month,date[0].year);
    }


   else if(date[0].month>date[1].month)
    {
        printf("%d/%d/%d is a bigger date2",date[1].day,date[1].month,date[1].year);
    }
 
   else if(date[0].month<date[1].month)
    {
        printf("%d/%d/%d is a bigger date2",date[0].day,date[0].month,date[0].year);
    }
 
   else if(date[0].day>date[1].day)
    {
        printf("%d/%d/%d is a bigger date3",date[1].day,date[1].month,date[1].year);
    }
   else if(date[0].day<date[1].day)
    {
        printf("%d/%d/%d is a bigger date3",date[0].day,date[0].month,date[0].year);
    }
  

}



int main(void){
    Date date[2];

    for(int i=0; i<2; i++)
    {
        printf("enter the day month and year(give space between number) :  ");
        scanf("%d %d %d",&date[i].day,&date[i].month,&date[i].year);
    }

    display(date);
    check(date);


}