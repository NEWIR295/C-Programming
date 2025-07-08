/*
Code Description:
                  Write a program in C to display the multiplication table of a given integer.
*/

#include <stdio.h> // input/output std library

//main function -> our own entry point
void main (void){
  int i; // lazm hna dah m4 cpp 5ly balk!!
  int n = 0; //declare and initialize var n with 0
  printf("Enter Number To Display It's Multiplication Table: ");
  scanf("%d",&n);

  for(i = 0; i <= 12 ;i++){
    printf("%d * %d = %d\n", n, i, i*n);
  }
}
