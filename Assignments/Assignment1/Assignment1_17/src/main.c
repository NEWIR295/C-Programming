/*
 * main.c
 *
 *  Created on: Jul 11, 2024
 *      Author: Mohamed Newir
 *      a program to count number of digits in a decimal number.
 */

//std libraries
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int number, count = 0;
	printf("enter the number: ");
	fflush(stdout);
	scanf("%d",&number);
	if(number < 0){
		number = -number;
	}
	while(number !=0){
		number /=10;
		count++;
	}
	printf("count number of digits in a decimal number = %d",count);
}
