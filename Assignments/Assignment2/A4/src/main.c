/*
 * main.c
 *
 *  Created on: Jul 18, 2024
 *      Author: Mohamed Newir
 *      simple calculator program
 */
//std libraries
#include <stdlib.h>
#include <stdio.h>
/*function prototype*/
double calculator(char,float,float);
int main(int argc,char **argv){
	char op;
	float num1,num2;
	printf("enter your desired operation: ");
	fflush(stdout);
	scanf("%c",&op);
	printf("enter your 1st number: ");
	fflush(stdout);
	scanf("%f",&num1);
	printf("enter your 2nd number: ");
	fflush(stdout);
	scanf("%f",&num2);
    printf("result= %f\n",calculator(op,num1,num2));
	return 0;
}
/*a C Function that return the addition or subtraction or
multiplication or division for two numbers. The function should take the
required operation and two numbers as arguments. It also should check
that the input operation is one of those operation that mentioned before
and if not it should return error. The function should be implemented
using switch case.
 */
double calculator(char op,float num1,float num2){
	double result;
	switch(op){
	case '+': result = num1 + num2;
	break;
	case '-': result = num1 - num2;
	break;
	case '*': result = num1*num2;
	break;
	case '/': result = num1/num2;
	break;
	default:
		 printf("math error\n");
		 return 0;
	}
	return result;
}
