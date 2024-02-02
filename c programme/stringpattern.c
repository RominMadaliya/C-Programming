#include<stdio.h>
int main(void)

{
    char a[]="RominMadaliya";

    for(int i=0;a[i]!='\0';i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }

}