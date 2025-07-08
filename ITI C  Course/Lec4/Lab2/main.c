/*
Code Description:
                  Write C code implement a function to swap 2 global variables.
*/

#include <stdio.h> // input/output std library

// Global variables
int num1 = 0; 
int num2 = 0;

// functions prototype
void swap(void);

//main function -> our own entry point
void main (void){

  printf("Enter number 1: ");
  scanf("%d",&num1);
  printf("Enter number 2: ");
  scanf("%d",&num2);

  printf("before Swapping:\nnumber 1 = %d, number 2 = %d\n", num1, num2);
  
  swap();
  
  printf("After Swapping:\nnumber 1 = %d, number 2 = %d\n", num1, num2);
}

void swap(void){
  int temp = num1;
  num1 = num2;
  num2 = temp;
}
