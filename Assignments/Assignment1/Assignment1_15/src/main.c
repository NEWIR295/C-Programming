/*
 * main.c
 *
 *  Created on: Jul 11, 2024
 *      Author: Mohamed Newir
 *      a program to calculate the power of a number. The number and its power are input from user.
 */


//std libraries
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

	int num, power;
	printf("enter number: ");
	fflush(stdout);
	scanf("%d",&num);
	printf("enter power: ");
	fflush(stdout);
	scanf("%d",&power);
	int result = num;
	for(int i = 0;i <power-1;i++){
		result *=num;
	}
	printf("result = %d\n",result);
	return 0;
}
