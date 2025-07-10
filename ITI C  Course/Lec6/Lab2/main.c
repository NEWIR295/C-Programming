/*
Code Description:
                 Write a C code that ask the user to enter 2 values and save them in two variables, then the program sends these variables
                 by address to a function that returns the summation of them. The program then prints the result.
*/

#include <stdio.h> // input/output std library

int sum(int*, int*);

void main (void){
  int num1 = 5, num2 = 10;
  printf("num1 = %d, num2 = %d\n", num1, num2);
  printf("%d + %d = %d\n", num1, num2, sum(&num1, &num2));
}

int sum(int *num1, int* num2){
  return *num1 + *num2;
}
