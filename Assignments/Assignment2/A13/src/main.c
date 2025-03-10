/*
 * main.c
 *
 *  Created on: Jul 26, 2024
 *      Author: Mohamed Newir
 */
/*STD libraries*/
#include <stdio.h>
#include <stdlib.h>
/*function prototype*/
int floorCalc(float num1, float num2);
int main (int argc, char **argv){
	float num1,num2;
	printf("enter float num1: ");
	fflush(stdout);
	scanf("%f",&num1);
	printf("enter float num2: ");
	fflush(stdout);
	scanf("%f",&num2);
	printf("floor = %d",floorCalc(num1,num2));
	return 0;
}
/*
a function to add two floating numbers.
Determine the integer floor of the sum. The floor is the truncated float
value, anything after the decimal point is dropped. For instance
floor(1.1+3.05)=floor(4.15)= 4
*/

int floorCalc(float num1, float num2){
	return num1 + num2;
}
