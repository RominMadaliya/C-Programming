#include <stdio.h>

int main() {
  // An array storing different ages
  int ages[50]; 
 
  float avg=0, sum = 0;

    for (int i = 0; i < 5; i++) {
    printf("Enter the number:");
  	scanf( "%d",&ages[i]);
  }
  // Get the length of the array
  int length = sizeof(ages) / sizeof(int);
    
  // Loop through the elements of the array and accumulate the sum
  for (int i = 0; i < length; i++) {
    sum += ages[i];
  }
  
  // Calculate the average by dividing the sum by the length
  avg = sum / length;
  
  // Print the average
  printf("The average age is: %.2f", avg);
  
  return 0;
}