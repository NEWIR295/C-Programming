/*
Code Description:
                  Write a C code that ask the user to enter 10 values and save them in an array using a for loop. 
                  The code then apply the bubble sorting algorithm and then print the values after sorting
*/

#include <stdio.h> // input/output std library

//main function -> our own entry point
void main (void){
  
  const int size = 10;
  int i, j, temp;
  int arr[size];
  
  printf("Please Enter 10 Values\n");
  for(i = 0; i < 10; i++){
    printf("Enter number %d: ",i+1);
    scanf("%d", (arr + i));
  }
  //Sequential Search
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
    printf("Array[%d] = %d\t", i, *(arr + i)); 
    if(i%3 == 0){
      printf("\n");
    }
  }
  
}
