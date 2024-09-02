/*
 * main.c
 *
 *  Created on: Aug 1, 2024
 *      Author: ma479
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*constant definitions*/
#define SIZE 6
/*function prototype*/
void arraySwap(int*,int*,int);
void arrayPrint(int*,int);
/*main function*/
int main(int argc,char **argv){
	int arr1[SIZE] = {1,2,3,4,5,6};
	int arr2[SIZE] = {6,5,4,3,2,1};
	printf("array 1 before swap:\n");
	arrayPrint(arr1,SIZE);
	printf("\narray 2 before swap:\n");
	arrayPrint(arr2,SIZE);
	arraySwap(arr1,arr2,SIZE);
	printf("\narray 1 after swap:\n");
	arrayPrint(arr1,SIZE);
	printf("\narray 2 after swap:\n");
	arrayPrint(arr2,SIZE);
	return 0;
}
/*
	a C function to swap the contents of two arrays
	with the same length using pointers.
 */
void arraySwap(int *arr1,int *arr2,int size){
	int i,temp;
	for(i = 0;i<size;i++){
		temp = *(arr1 + i);
		*(arr1 + i) = *(arr2 + i);
		*(arr2 + i) = temp;
	}
}
/*print array function*/
void arrayPrint(int *arr,int size){
	int i;
	for(i = 0;i<size;i++){
		printf("%d\t",*(arr+i));
	}
}
