/*
 * main.c
 *
 *  Created on: Jul 29, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*function prototype*/
int arithmeticSeries(int);
/*main function*/
int main(int argc, char **argv){
	int num;
	printf("enter term number to compute its arithmetic series: ");
	fflush(stdout);
	scanf("%d",&num);
	int nthTerm = arithmeticSeries(num);
	printf("arithmetic series of %dth term = %d",num,nthTerm);
	return 0;
}
/*
a program that computes the nth term of the arithmetic
series: 1, 3, 5, 7, 9, …
Run the program to compute the 100th term of the given series.
*/
int arithmeticSeries(int num){
	int arthSeries = 1 + 2*(num-1);
	return arthSeries;
}
