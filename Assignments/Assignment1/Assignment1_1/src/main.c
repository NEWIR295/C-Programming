/*
 * main.c
 *
 *  Created on: Jul 11, 2024
 *      Author: Mohamed Newir
 *      program that take two integers from the user  and print the results of this equation
 */

//std libraries
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int num1, num2, result;//variables name for the two operands, output
	printf("Perform math. Op \"  ((num1 + num2) * 3) – 10 \"\n");
	printf("Enter the first operand : ");
	fflush(stdout);
	scanf("%d",&num1);
	printf("Enter the second operand : ");
	fflush(stdout);
	scanf("%d",&num2);
	result = ((num1 + num2)*3)-10;
	printf(" operation result = %d \n",result);
	return 0;
}



