/*
Code Description:
                Write C code that will ask the user to enter 2 numbers, then the main function will call a function named Get_Max that takes the 2
                values entered by the user then return the maximum of them. The main function then will print the returned value
*/

#include <stdio.h> // input/output std library

// functions prototype
int Get_Max(int, int);

//main function -> our own entry point
void main (void){

  int num1 = 0; 
  int num2 = 0;
  
  printf("Enter number 1: ");
  scanf("%d",&num1);
  printf("Enter number 2: ");
  scanf("%d",&num2);
  
  printf("Max number = %d\n", Get_Max(num1, num2));
}

int Get_Max(int num1, int num2){
  return num1 > num2 ? num1 : num2;
}
