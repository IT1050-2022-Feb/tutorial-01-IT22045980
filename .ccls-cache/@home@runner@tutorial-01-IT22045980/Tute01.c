/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {
  // declare variable
  float sub1, sub2, avg;
  // get user input
  printf("Enter 1st subject marks : ");
  scanf("%f", &sub1);
  printf("Enter 2nd subject marks : ");
  scanf("%f", &sub2);
  // calculation
  avg = (sub1 + sub2) / 2.0;
  // output
  printf("Averrage marks : %f", avg);
  return 0;
}
