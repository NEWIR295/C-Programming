/*
 * main.c
 *
 *  Created on: Jul 11, 2024
 *      Author: Mohamed Newir
 *      Print sum of first 100 integers. (With data validation)
 */


//std Libraries
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){

	int sum = 0;
	for(int i = 0;i<=100;i++){
		sum +=i;
	}
	printf("sum of 1st 100 numbers = %d \n",sum);
	return 0;
}
