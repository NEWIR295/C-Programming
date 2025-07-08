/*
Code Description:
                  Write a program in C to read 10 numbers from the user and find their summation and average
*/

#include <stdio.h> // input/output std library

//main function -> our own entry point
void main (void){
  int i; // lazm hna dah m4 cpp 5ly balk!!
  float num = 0;
  float average = 0;
  float summation = 0;
  for(i = 1; i <= 10 ; i++){
    printf("Enter number %d: ", i);
    scanf("%f", &num);
    summation += num;
  }
  average = summation/10.0;
  printf("\nSummation = %0.2f", summation);
  printf("\nAverage = %0.2f\n", average); 
}
