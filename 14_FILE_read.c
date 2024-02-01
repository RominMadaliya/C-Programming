#include<stdio.h>


int main(void)
{

FILE *ptr;
int n[2];
ptr=fopen("ansh.txt","r");

fscanf(ptr,"%d",&n[0]);
fscanf(ptr,"%d",&n[1]);

fclose(ptr);

if(ptr=='\0')
{
    printf("file does not exist");
}
else{
    printf("file does exist");
}

printf(" %d %d",n[0],n[1]);

}