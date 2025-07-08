/*
Code Description:
                  Write a C code that ask the user to enter 10 values and save them in an array using a for loop.
                  Then print the summation and the average of the values entered.
*/

#include <stdio.h> // input/output std library

//main function -> our own entry point
void main (void){
  
  const int size = 10;
  int i;
  int arr[size];
  int average = 0;
  int summation = 0;
  printf("Please Enter 10 Values\n");
  for(i = 0; i < 10; i++){
    printf("Enter number %d: ",i+1);
    scanf("%d", (arr + i));
    summation += *(arr + i);
  }
  average = summation/10;
  printf("Summation = %d\n", summation);
  printf("Average = %d\n", average);
}
