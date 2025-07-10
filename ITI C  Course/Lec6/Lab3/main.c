/*
Code Description:
                 Write a C code that ask the user to enter 2 values and save them in two variables,
                 then the program sends these variables to function that calculates the summation
                 and subtraction of them, the function returns the 2 results and return them in two
                 pointers received as input arguments . The program then print the 2 results.
*/

#include <stdio.h> // input/output std library

void clc(int, int, int*, int*);

void main (void){
  int num1 = 5, num2 = 10;
  int sum = 0, sub = 0;
  clc(num1, num2, &sum, &sub);
  printf("%d + %d = %d\n", num1, num2, sum);
  printf("%d - %d = %d\n", num1, num2, sub);
}

void clc(int num1, int num2, int *sum, int* sub){
   *sum = num1 + num2;
   *sub = num1 - num2;
}
