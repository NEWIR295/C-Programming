/*
 * main.c
 *
 *  Created on: Aug 1, 2024
 *      Author: ma479
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*structure deceleration*/
typedef struct{
	int real;
	int imagine;
}complex;
/*function prototype*/
void complexAddition(complex,complex,complex*);
/*main function*/
/*
	function to add two complex numbers by passing
	two structure to a function and display the results.
*/
int main (int argc,char **argv){
	complex num1,num2,result;
	num1.real = 1;
	num1.imagine= 2;
	num2.real = -2;
	num2.imagine = 5;
	complexAddition(num1,num2,&result);
	printf("complex result = %d + %di",result.real,result.imagine);
	return 0;
}
void complexAddition(complex num1,complex num2,complex *result){
	result -> real = num1.real + num2.real;
	result -> imagine = num1.imagine + num2.imagine ;
}

