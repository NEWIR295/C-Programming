/*
Code Description:
                  Write C code that ask will ask the user to enter the result of 3 x 4, In case the user entered correct answer the program will
                  print Thanks, otherwise the program will print try again until the user enters the correct answer
*/

#include <stdio.h> // input/output std library

//main function -> our own entry point
void main (void){
  int i; // lazm hna dah m4 cpp 5ly balk!!
  int n = 0; //declare and initialize var n with 0
  printf("Enter The Result of 3 x 4: ");
  scanf("%d", &n);
  while(n != 12){
      printf("Not Correct Please Try Again: ");
      scanf("%d", &n);
  }
  printf("Thank you\n");
}
