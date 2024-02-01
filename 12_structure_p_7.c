#include <stdio.h>

typedef struct Time_1
{
    int hour;
    int minutes;
    int second;
} Time;

void display(Time time[])
{
    for (int i = 0; i < 2; i++)
    {
        printf("\nthe  time is %d:%d:%d\n", time[i].hour, time[i].minutes, time[i].second);
    }
}

void check(Time time[])
{

    if (time[0].hour == time[1].hour && time[0].minutes == time[1].minutes && time[0].second == time[1].second)
    {
        printf("\nthe time is same ");
        printf("\n");
    }

    else if (time[0].second < time[1].second)
    {
        printf("%d:%d:%d is a bigger time1", time[1].hour, time[1].minutes, time[1].second);
    }
    else if (time[0].second > time[1].second)
    {
        printf("%d:%d:%d is a bigger time2", time[0].hour, time[0].minutes, time[0].second);
    }


    else if (time[0].minutes < time[1].minutes)
    {
        printf("%d:%d:%d is a bigger time3", time[1].hour, time[1].minutes, time[1].second);
    }

    else if (time[0].minutes > time[1].minutes)
    {
        printf("%d:%d:%d is a bigger time4", time[0].hour, time[0].minutes, time[0].second);
    }

    else if (time[0].hour < time[1].hour)
    {
        printf("%d:%d:%d is a bigger time5", time[1].hour, time[1].minutes, time[1].second);
    }
    else if (time[0].hour > time[1].hour)
    {
        printf("%d:%d:%d is a bigger time6", time[0].hour, time[0].minutes, time[0].second);
    }
}

int main(void)
{
    Time time[2];

    for (int i = 0; i < 2; i++)
    {
        printf("enter the hour minutes and second(give space between number) :  ");
        scanf("%d %d %d", &time[i].hour, &time[i].minutes, &time[i].second);
    }

    display(time);
    check(time);
}