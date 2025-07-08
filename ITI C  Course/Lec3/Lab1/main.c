/*
Code Description:
                  Write C code that ask user for the number of times it will print his name
*/

#include <stdio.h> // input/output std library

//main function -> our own entry point
void main (void){
  int i; // lazm hna dah m4 cpp 5ly balk!!
  int n = 0; //declare and initialize var n with 0
  printf("Please Enter The Number Of Times To Print Your Name: ");
  scanf("%d", &n);

  for(i =0; i < n ; i++){
    printf("Hello Newir!!\n");
  }

}
