/*
 * main.c
 *
 *  Created on: Jul 13, 2024
 *      Author: Mohamed Newir
 */

//std libraries
#include <stdio.h>
#include <stdlib.h>
//function prototype
int square(int);

int main(int argc, char **argv){
	int num,squareNum;
	printf("enter number: ");
	fflush(stdout);
	scanf("%d",&num);
	squareNum = square(num);
	printf("square of %d = %d",num,squareNum);
	return 0;
}
//function that return square of input number
int square(int num){
	int squareNum = num*num;
	return squareNum;
}
