/*
Code Description:
                write a C code to calculate the area of Circle and Volume of a Cylinder.
*/

#include <stdio.h> // input/output std library

// functions prototype
float cylinderVolume(float,float);
float circleArea(float);


//main function -> our own entry point
void main (void){

  float r = 0; //declare and initialize var n with 0
  float h = 0;
  printf("Enter Radius Of Circle: ");
  scanf("%f",&r);
  printf("Area of Circle = %.2f\n\n", circleArea(r));

  printf("Enter Radius Of Cylinder: ");
  scanf("%f",&r);
  
  printf("Enter Height Of Cylinder: ");
  scanf("%f",&h);
  printf("Cylinder Volume = %.2f\n\n", cylinderVolume(r,h));
}

float cylinderVolume(float r,float h){
  return 3.14 * r * r * h; 
}

float circleArea(float r){
  return 3.14 * r * r; 
}

