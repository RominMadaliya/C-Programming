// #include<stdio.h>
// void sum(int a,int b)
// {
//     int tot;
//     tot=a+b;
//     printf("The Sum of this two number is : %d",tot);
// }
// int square(int a)
// {
//     int squre;
//     squre=a*a;

//     return squre;

// }

// void swap()
// {
//     int m,n,o;
    
    

//     printf("Enter the 1st number:");
//     scanf("%d",&m);

//     printf("Enter the 2nd number:");
//     scanf("%d",&n);
//      printf("\nbefore swaping : %d,%d",m,n);
//     o=m;
//     m=n;
//     n=o;

//     printf("\nAfter swanping :%d,%d",m,n);

// }




// int main()
// {
//     // int rom,viv;

//     // printf("Enter the value of romi:");
//     // scanf("%d",&rom);
    
//     // printf("Enter the value of viv:");
//     // scanf("%d",&viv);

//     // sum(rom,viv);

//     // int sq;
    
//     // sq=square(rom);
//     // printf("\nThe square of number is %d",sq);

//     swap();


// return 0;
// }


#include<stdio.h>



    int evenodd(int n)
    {
        
        if(n%2==0)
        {
           return 1;
        }
        else{
          
          return 0;
        }
    }
    int main()
    {
        int n,a;
        printf("Entyer the number:");
        scanf("%d",&n);
      if(evenodd(n))
      {
        printf("even");
      }
      else{
        printf("odd");
      }
return 0;
    }










































































