/*
Code Description:
                 Write a C code defines an int initialized with 10, then print it, then define a pointer that points to that int 
                 and change the value of the int through the pointer to be 20, then print it again.
*/

#include <stdio.h> // input/output std library

void main (void){
  int x = 10;
  int *ptr = &x;
  printf("X before change = %d\n", x);
  *ptr = 10;
  printf("X after change = %d\n", x);
}
