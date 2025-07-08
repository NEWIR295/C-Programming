/*
Code Description:
                  Write a C code that ask the user to enter 10 values and save them in an array using a for loop. Then ask the user to enter a value to search about, if the       
                  value existing in the 10 values, the program will print “Value Exists x times” where x defines how many times the value exists. If the value is not exist, the     
                  program will print “Value Not Exist”. Use Linear Searching Algorithm.
*/

#include <stdio.h> // input/output std library

//main function -> our own entry point
void main (void){
  
  const int size = 10;
  int i, j, temp, num, flag = 0;
  int arr[size];
  
  printf("Please Enter 10 Values\n");
  for(i = 0; i < 10; i++){
    printf("Enter number %d: ",i+1);
    scanf("%d", (arr + i));
  }
  
  printf("Enter number search: ");
  scanf("%d", &num);
  
  for(i = 0; i < size; i++){
    if(arr[i] == num){
      printf("Value Exists");
      flag = 1;
      break;
    }
  }
  if(flag == 0){
    printf("Value doesn't Exist\n");
  }
}
