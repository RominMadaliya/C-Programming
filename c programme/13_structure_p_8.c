#include<stdio.h>

typedef struct Date_1
{
    int day;
    int month;
    int year;
} Date;
typedef struct Time_1
{
    int hour;
    int minutes;
    int second;
} Time;


int check(Date date[], Time time[]);

int main(void){
    Date date[2];
     Time time[2];

    for(int i=0; i<2; i++)
    {
        printf("enter the day month and year(give space between number) :  ");
        scanf("%d %d %d",&date[i].day,&date[i].month,&date[i].year);

             printf("enter the hour minutes and second(give space between number) :  ");
        scanf("%d %d %d", &time[i].hour, &time[i].minutes, &time[i].second);
    }
    int v=check(date,time);

    if (v==0)
    {
        printf("the both time stamp is same");
    }

    else if (v==1)
    {
        printf("%d/%d/%d %d:%d:%d is latest time stemp",date[1].day,date[1].month,date[1].year, time[1].hour, time[1].minutes, time[1].second);
    }
    else if (v==-1)
    {
         printf("%d/%d/%d %d:%d:%d is latest time stemp",date[0].day,date[0].month,date[0].year, time[0].hour, time[0].minutes, time[0].second);
    }
}




int check(Date date[],Time time[])
{
    if(date[0].day==date[1].day&&date[0].month==date[1].month&&date[0].year==date[1].year&&time[0].hour == time[1].hour && time[0].minutes == time[1].minutes && time[0].second == time[1].second)
    {
        return 0;
    }

    
   else if(date[0].year>date[1].year)
    {
        return -1;
    }
    else if (date[0].year<date[1].year)
    {
        return 1;
    }


   else if(date[0].month>date[1].month)
    {
        return -1;
    }
 
   else if(date[0].month<date[1].month)
    {
        return 1;
    }
 
   else if(date[0].day>date[1].day)
    {
        return -1;
    }
   else if(date[0].day<date[1].day)
    {
        return 1;
    }



    else if (time[0].second < time[1].second)
    {
        return 1;
    }
    else if (time[0].second > time[1].second)
    {
               return -1;

    }


    else if (time[0].minutes < time[1].minutes)
    {
                return 1;

    }

    else if (time[0].minutes > time[1].minutes)
    {
               return -1;

    }

    else if (time[0].hour < time[1].hour)
    {
               return 1;

    }
    else if (time[0].hour > time[1].hour)
    {
                return -1;

    }


    



}












