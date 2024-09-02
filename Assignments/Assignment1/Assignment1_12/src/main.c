/*
 * main.c
 *
 *  Created on: Jul 11, 2024
 *      Author: Mohamed Newir
 *       a program that reads a positive integer and computes the factorial.
 */

//std libraries
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

	unsigned int num;
	printf("Enter +ve integer: ");
	fflush(stdout);
	scanf("%d", &num);
	int result = num;
	for(int i = num-1;i>0;i--){
		result *=i;
	}
	printf(" the factorial of %d = %d \n",num,result);
	return 0;
}
