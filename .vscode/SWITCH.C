// #include<stdio.h>
// int main(void)
// {
//     int n;

//     printf("Enter the number of n:");
//     scanf("%d",&n);

//     switch(n)
//     {
//         case 1:
//         printf("romin");
//         break;5
        
//         case 2:
//         printf("vivek");
//         break;
//         case 3:
//         printf("ansh");
//         break;
//         case 4:
//         printf("divyesh");
//         break;
//         case 5:
//         printf("avinash");
//         break;
//         case 6:
//         printf("manav");
//         break;
//     }

// }



#include<stdio.h>
int main(void)
{
    int n;

    printf("Enter th number:");

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            if (i%2==0)
            {
            break;
            }
            printf("%d",j);
           
        }
        printf("\n");
    }
}