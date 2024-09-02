/*
 * main.c
 *
 *  Created on: Jul 29, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*constant definitions*/
#define SIZE 4
/*Function Prototype*/
int arraySummation(int*,int);
/*MAIN FUNCTION*/
int main(int argc, char **argv){
	int array[SIZE] = {0};
	int i;
	printf("enter numbers for summation:\n");
	for(i = 0;i<SIZE;i++){
		fflush(stdout);
		scanf("%d",(array + i));
	}
	int sum = arraySummation(array,SIZE);
	printf("summation of the elements in the array = %d",sum);
	return 0;
}
/*
function that sum all of array elements
*/
int arraySummation(int *arr,int size){
	int sum =0;
	int i;
	for(i=0;i<size;i++){
		sum += *(arr + i);
	}
	return sum;
}
