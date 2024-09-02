/*
 * main.c
 *
 *  Created on: Jul 31, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*constant definitions*/
#define SIZE 6
/*function prototype*/
void arraySum(int *,int*,int);
/*main function*/
int main (int argc, char **argv){
	int i;
	int sum = 0;
	int arr[SIZE];
	printf("enter numbers for summation\n");
	for (i = 0;i<SIZE;i++){
		fflush(stdout);
		scanf("%d",(arr + i));
	}
	arraySum(arr,&sum,SIZE);
	printf("sum of array = %d",sum);
	return 0;
}
/*
 C Program to compute sum of the array elements using pointers.
*/
void arraySum(int *arr,int *sum,int size){
	int i;
	for(i = 0;i<size;i++){
		*sum += *(arr + i);
	}
}
