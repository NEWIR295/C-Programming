/*
 * main.c
 *
 *  Created on: Jul 11, 2024
 *      Author: Mohamed Newir
 *      a program that reads a positive integer and checks if it is a perfect square.
 */

//std Libraries
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc , char **argv){

	unsigned int num, root;
	printf("enter +ve number: ");
	fflush(stdout);
	scanf("%d",&num);
	root = sqrt(num);
	if(num == (root*root)){
		printf("%d is perfect square",num);
	}
	else{
		printf("%d isn't perfect square",num);
	}
	return 0;
}
