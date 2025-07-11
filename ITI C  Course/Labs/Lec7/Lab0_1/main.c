/*
Code Description:
                 
*/

#include <stdio.h> // input/output std library

void main (void){
  unsigned int x = 0xABCD;
  unsigned char *ptr = &x;
  printf("%X\n",*ptr);
  ptr++;
  printf("%X\n",*ptr);
  printf("%ld", sizeof(char));
  
}

