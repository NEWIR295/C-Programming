/*
Code Description:
                  Write a C code that ask the user to enter 10 values and save them in an array using a for loop. Then ask the user to enter a value to search about, if the value 
                  existing in the 10 values, the program will print “Value Exists x times” where x defines how many times the value exists. If the value is not exist, the program    
                  will print “Value Not Exist”. Use Binary Searching Algorithm.
*/

#include <stdio.h> // input/output std library

// function prototypes
void sort(int arr[], int size);
int search(int arr[], int size, int target);

//main function -> our own entry point
void main (void){
  
  const int size = 10;
  int i, num, flag = 0;
  int arr[size];
  
  printf("Please Enter 10 Values\n");
  for(i = 0; i < 10; i++){
    printf("Enter number %d: ",i+1);
    scanf("%d", (arr + i));
  }
  
  sort(arr, size);
  printf("Array After Sorting\n");
  for(i = 0; i < 10; i++){
    printf("%d\t", *(arr + i)); 
  }
  
  printf("\nEnter number search: ");
  scanf("%d", &num);
  
  if( search(arr, size, num) == -1){
    printf("Value doesn't Exist\n");
  }
  else{
	   printf("Value Exists\n");
  }
}

// Array Sort Algorithm Implementation
void sort(int arr[], int size){
  // Sorting the input Array
  int i, j, temp;
  for(i = 0; i < size; i++){
    for(j = i + 1; j < size; j++){
      if(arr[i] > arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

// Array Search Algorithm Implementation
int search(int arr[], int size, int target){
   //Binary Search
   int i, j;
  int left = 0;
  int right = size - 1;
  int mid;   
  for(i = 0; i < size; i++){
    mid = (left + right)/2;
    if(arr[mid] == target){
      return 1;
    }
    else if(arr[mid] < target){
        left = mid +1;
    }
    else{
      right = mid - 1;
    }
  }
  return -1;
}
