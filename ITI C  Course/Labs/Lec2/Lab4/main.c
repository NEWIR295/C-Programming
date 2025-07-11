/*
Code Description:
                Write a C code to ask the user to enter his grade and the program will print his rating.
                
                0 <= grade < 50 ------> 
                50 <= grade < 65 ------> Normal
                65 <= grade < 75 ------> Good
                75 <= grade < 85 ------> Very Good
                85 <= grade ------> Excellent
*/

#include <stdio.h> // input/output std library

//main function -> our own entry point
void main (void){
  
  int grade = 0; //declare and initialize var grade with 0
  printf("Please Enter Grade to check: ");
  scanf("%d", &grade);
  
  if(85 <= grade){
    printf("Excellent\n");
  }
  else if(75 <= grade ){
    printf("Very Good\n");
  }
  else if(65 <= grade){
    printf("Good\n");
  }
  else if (50 <= grade){
    printf("Normal\n");
  }
  else if(0 <= grade){
    printf("Failed\n");
  }
  else{
    // grade b -ve ? hza ma lam nsm3 32h mn qabl :)
    printf("You have entered an invalid grade\n");
  }
  
}
