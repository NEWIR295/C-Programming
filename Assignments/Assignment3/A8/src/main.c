/*
 * main.c
 *
 *  Created on: Jul 29, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*function prototype*/
int geometricSeries(int);
/*main function*/
int main(int argc, char **argv){
	int num;
	printf("enter term to get its geometric sequence: ");
	fflush(stdout);
	scanf("%d",&num);
	int nthTerm = geometricSeries(num);
	printf("geometric sequence of %dterm = %d",num,nthTerm);
	return 0;
}
/*
e a program that computes the nth term of the geometric
series: 1, 3, 9, 27, …
Run the program to compute the 10th term of the given series.
*/
int geometricSeries(int num){
	return pow(3,num-1);

}
