/*
 * main.c
 *
 *  Created on: Jul 11, 2024
 *      Author: Mohamed Newir
 *      a program that reads the radius of a circle and calculates the area and circumference then prints the results.
 *
 */

//std Libraries
#include <stdio.h>
#include <stdlib.h>
#define  pi 3.14
int main(int argc, char **argv){
	float radius, circumference, area;
	printf("Enter the value of radius: ");
	fflush(stdout);
	scanf("%f",&radius);
	area = (radius*radius)*pi ;
	circumference = 2.0*pi*radius;
	printf("Circle Area = %f\t, Circle circumference = %f\n",area,circumference);
	return 0;
}
