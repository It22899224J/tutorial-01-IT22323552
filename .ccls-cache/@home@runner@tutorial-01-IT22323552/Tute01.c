/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {

  int mark[2];
  float average;

  for (int i = 0; i <= 1;
       i++) // for loop is used to take the inputs of the marks
  {
    printf("Enter the mark for subject %d:", i + 1);
    scanf("%d", &mark[i]);
  }
  average = (mark[0] + mark[1]) / 2.0; // calculating the average

  printf("The average of the subjects is %.2f", average);
  return 0;
}
