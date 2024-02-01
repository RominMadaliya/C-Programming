
// // given array odd position elements sum

#include<stdio.h>
int main()
{
int sum=0;
int n[6] = {1,2,3,4,5,6};

for(int i=0; i<6; i++ )
{
    if(i%2==0)
    {
        printf("%d\n",n[i]);
        sum+=n[i];
    }
}

printf("the sum is %d",sum);

return 0;

}



// // given array even position elements sum

// #include<stdio.h>
// int main()
// {
// int sum=0;
// int n[6] = {1,2,3,4,5,6};

// for(int i=0; i<6; i++ )
// {
//     if(i%2!=0)
//     {
//         printf("%d\n",n[i]);
//         sum+=n[i];
//     }
// }

// printf("the sum is %d",sum);

// return 0;

// }