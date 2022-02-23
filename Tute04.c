/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>  //header
int minimum(int no1,int no2); //function declaration part
int maximum(int no1,int no2);
int multiply(int no1,int no2);
int main() {
   int no1, no2;
   printf("Enter a value for no 1 : "); //give inputs from users
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2)); //minimum function calling
   printf("%d ", maximum(no1, no2));  //maximum function calling
   printf("%d ", multiply(no1, no2)); //multiply function calling
   return 0;
}
int minimum(int no1,int no2) //minimum function
{
  if (no1<no2)
  {
    return no1;
  }
 
  else{
  return no2;
}
}
int maximum(int no1,int no2) //maximum function
{
  if (no1<no2)
  {
    return no2;
  }
  
  else{
  return no1;
}
}

int multiply(int no1,int no2)  //multiply function
{
  return no1*no2;
}
