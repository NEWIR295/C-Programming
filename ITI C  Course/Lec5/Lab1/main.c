/*
Code Description:
                  Write a C code that ask the user to enter 10 values and save them in an array using a for loop. 
                  Then print the values entered by the user in reverse order using another for loop.
*/

#include <stdio.h> // input/output std library

//main function -> our own entry point
void main (void){
  
  const int size = 10;
  int i;
  int arr[size];
  printf("Please Enter 10 Values\n");
  for(i = 0; i < 10; i++){
    printf("Enter number %d: ",i+1);
    scanf("%d", (arr + i));
  }
  for(i = size - 1; i >= 0; i--){
    printf("Number %d: %d \n", i+1, *(arr + i));
  }
}
