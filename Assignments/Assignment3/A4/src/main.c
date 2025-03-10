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
#define SIZE 6
/*function prototype*/
void selectionSort(int*,int);
/*main function*/
int main(int argc,char **argv){
	int i;
	int array[SIZE] = {80,0,2,5,-1,10};
	selectionSort(array,SIZE);
	printf("array after sorting:\n");
	for(i = 0;i<SIZE;i++){
		printf("%d\t",*(array + i));
	}
	return 0;
}
/*
a C function that use the selection sort algorithm to sort
an integer array in ascending order (search for the selection sorting algorithm).
*/
void selectionSort(int *arr,int size){
	/*select swap counter shift*/
	int i,j;
	int minIndex;
	/*select swap counter shift*/
	for(i = 0;i<size-1;i++){
		minIndex = i;
		for(j= i+1;j<size;j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		int temp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = temp;
	}
}
