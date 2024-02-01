#include<stdio.h>

void p1(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
         printf("\n");
    }
}

void p2(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
         printf("\n");
    }
}

void p5(int n)
{
    for(int i=1;i<=n;i++)
    {
        int v=n;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",v);
            v--;
        }
         printf("\n");
    }
}

void p3(int n)
{
    for(int i=1,v=n;i<=n;i++)
    {
       
        for(int j=1;j<=i;j++)
        {
            printf("%d ",v);
            
        }
         printf("\n");
         v--;
    }
}

void p4(int n)
{
    int k=1;
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            printf("%d ",k);
            k++;
        }
         printf("\n");
    }
}

void p6(int n)
{
    for(int i=65;i<=n+65;i++)
    {
        for(int j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}

void p7(int n)
{
    int k=65;
    for(int i=65;i<=n+65;i++)
    {
        for(int j=65;j<=i;j++)
        {
            if(i%2==0)
            {
            printf("%c",k+32);
            }
            else
            {
            printf("%c",k);
            }
            k++;
        }
        printf("\n");
    }
}

void p8(int n)
{
    int k=65;
    for(int i=65;i<=n+65;i++)
    {
        for(int j=65;j<=i;j++)
        {
            if(j%2==0)
            {
            printf("%c",k);
            }
            else
            {
            printf("%c",k+32);
            }
            k++;
        }
        printf("\n");
    }
}

void p9(int n)
{
    int k=65;
    for(int i=65;i<=n+65;i++)
    {
        for(int j=65;j<=i;j++)
        {
            {
            printf("%c",k);
            }
            k++;
        }
        printf("\n");
    }
}

void p10(int n)
{
    int v=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1,m=v;j<=i;j++)
        {
           
            printf("%d",m++);
            
        }
        printf("\n");
        v--;
    }
}

void p11(int n)
{
    int k=1;
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            printf("%d ",k%2==1);
            k++;
        }
         printf("\n");
    }
}


void p12(int n)
{
    int v=65;
    for(int i=65;i<=n+65;i++)
    {
        for(int j=65,m=v;j<=i;j++)
        {
            printf("%c",m--);
        }
        printf("\n");
        v++;
    }
}



int main()
{

    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    //p1(n);
    // p2(n);
    //p3(n);
   // p4(n);
  // p5(n);10

//   p6(n);
  //p7(n);
  //p8(n);
  //p9(n);
  //p10(n);
//  p11(n);
 // p12(n);

}