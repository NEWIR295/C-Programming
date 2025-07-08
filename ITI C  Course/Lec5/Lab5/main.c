/*
Code Description:
                  Write a C code that ask the user to enter 10 values and save them in an array using a for loop. Then ask the user to enter a value to search about, if the value 
                  existing in the 10 values, the program will print “Value Exists x times” where x defines how many times the value exists. If the value is not exist, the program    
                  will print “Value Not Exist”. Use Binary Searching Algorithm.
*/

#include <stdio.h> // input/output std library

//main function -> our own entry point
void main (void){
  
  const int size = 10;
  int i, j, temp, num, flag = 0;
  int arr[size];
  
  int left = 0;
  int right = size - 1;
  int mid;
  
  printf("Please Enter 10 Values\n");
  for(i = 0; i < 10; i++){
    printf("Enter number %d: ",i+1);
    scanf("%d", (arr + i));
  }
  
  // Sorting the input Array
  for(i = 0; i < size; i++){
    for(j = i + 1; j < size; j++){
      if(arr[i] > arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  printf("Array After Sorting\n");
  for(i = 0; i < 10; i++){
    printf("%d\t", *(arr + i)); 
  }
  printf("\nEnter number search: ");
  scanf("%d", &num);
  //Binary Search 
  for(i = 0; i < size; i++){
    mid = (left + right)/2;
    if(arr[mid] == num){
      printf("Value Exists\n");
      flag = 1;
      break;
    }
    else if(arr[mid] < num){
        left = mid +1;
    }
    else{
      right = mid - 1;
    }
  }
  
  if(flag == 0){
    printf("Value doesn't Exist\n");
  }
}
