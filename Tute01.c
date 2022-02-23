/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1,sub2;  //variable declaration part
  float avg;

  printf("Enter Your  subject 1 Marcks:"); //get inuts from user
  scanf("%d",&sub1);

  printf("Enter Your  subject 2 Marcks:");
  scanf("%d",&sub2);

  avg=(sub1+sub2)/2.0; //calculation part
  printf("Yor subjects average is:%.2f",avg);  //prin average
  
  return 0;
}

