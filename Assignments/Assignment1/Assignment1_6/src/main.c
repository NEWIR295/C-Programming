/*
 * main.c
 *
 *  Created on: Jul 11, 2024
 *      Author: Mohamed Newir
 *      a program that print the relation between two integer number if those numbers are equal, not equal and which one contain the higher value
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

	int num1, num2;//, greater;
	printf("enter the first number: ");
	fflush(stdout);
	scanf("%d",&num1);
	printf("enter the second number: ");
	fflush(stdout);
	scanf("%d",&num2);
	/*
	if(num1 > num2 || num1<num2){
		printf("the two numbers aren't equal\n");
	}
	else{
		printf("the two numbers are equal\n");
	}*/
	if(num1 > num2){
		printf("the two numbers aren't equal\n");
		printf("greater value = %d",num1);
		//greater = num1;
	}
	else if(num1<num2){
		printf("the two numbers aren't equal\n");
		printf("greater value = %d",num2);
		//greater = num2 ;
	}
	else{
		printf("the two numbers are equal\n");
	}
	return 0;
}
