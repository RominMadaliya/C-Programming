#include <stdio.h>
int main(void)
{
  int n[5];

  for (int i = 0; i < 5; i++)
  {

    printf("\nenter the value of n[%d]:", i);
    scanf("%d", &n[i]);
  }
  for (int i = 0; i < 5; i++)
  {

    printf("the value is %d\n", n[i]);
  }

  int v[5];

  v[0] = 25;
  v[1] = 8;
  v[2] = 9;
  v[3] = 4;
  v[4] = 7;

  for (int i = 0; i < 5; i++)
  {

    printf("the value is %d\n", v[i]);
  }
}