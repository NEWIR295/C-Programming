/*
Code Description:
          Write a C code to calculate employee salary in a week based on the his working hours, hour rate is 50.
          The program will ask the user to enter the working hours, then it will print his salary.
          But if the working hours are less than 40 hours, a 10% deduction will be applied.
*/

#include <stdio.h> // input/output std library

//main function -> our own entry point
void main (void){
  
  float hourRate = 50.0;
  int workingHours = 0;
  printf("Please Enter Employee Working Hour:  ");
  scanf("%d", &workingHours);
  
  if(workingHours >= 40){
    printf("Employee Salary = %0.2f", workingHours * hourRate);
  }
  else{
    printf("Deduction Has Been Applied\n");
    printf("Employee Salary After Deduction = %0.2f\n", workingHours * hourRate - workingHours * hourRate *0.1);
  }
}
