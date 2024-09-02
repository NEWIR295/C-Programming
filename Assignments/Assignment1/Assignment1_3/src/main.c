/*
 * main.c
 *
 *  Created on: Jul 11, 2024
 *      Author: Mohamed Newir
 *      a program for converting temperature from  degrees Celsius to degrees Fahrenheit
F = C x 9
5
 + 32
 */
//std Libraries
#include <stdio.h>
#include <stdlib.h>

int main (int argc , char **argv){
	int tempDegreeC, tempDegreeF;
	printf("Enter the temperature degree in celsius:  ");
	fflush(stdout);
	scanf("%d",&tempDegreeF);
	tempDegreeF = tempDegreeC *(5/9)+32;
	printf("Temperature degree in Fahreheit = %d ", tempDegreeF);
	return 0;
}
