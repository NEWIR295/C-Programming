/*
 * main.c
 *
 *  Created on: Jul 11, 2024
 *      Author: Mohamed Newir
 *      a program that takes three integers, and prints out the smallest number.
 */

//std libraries
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

	int num1, num2, num3;
	printf("enter first number: ");
	fflush(stdout);
	scanf("%d",&num1);
	printf("enter second number: ");
	fflush(stdout);
	scanf("%d",&num2);
	printf("enter third number: ");
	fflush(stdout);
	scanf("%d",&num3);
	/*another sol suggested by tarek
	 * int greater= num1;
	 * if(num2>greater){
	 * greater =num2;
	 * }
	 * if(num3>greater){
	 * greater = num3;
	 * }
	 */
	if(num1 < num2 && num1 < num3){
		printf(" smaller number = %d \n",num1);
	}
	else if (num2<num1 && num2 < num3){
		printf(" smaller number = %d \n",num2);
	}
	else{
		printf(" smaller number = %d \n",num3);
	}
	return 0;
}
