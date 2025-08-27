/*
Code Description:
                  Write a C code that ask the user to enter a number 
				  and check if it is Even or Odd number
*/

#include <stdio.h> // input/output std library

//main function -> our own entry point
void main (void){
  
  int num = 0; //declare and initialize var num with 0
  printf("Please Enter A number to check: ");
  scanf("%d", &num);
  
  // check logic
  if(num % 2 == 0){
    printf("you have entered an even number\n");
  }
  else{
    printf("you have entered an odd number\n");
  }
}
