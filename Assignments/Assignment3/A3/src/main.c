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
void bubbleSort(int *,int);
/*main function*/
int main(int argc, char **argv){
	int array[SIZE] = {6,5,2,9,10,1};
	bubbleSort(array,SIZE);
	int i;
	printf("array after sorting:\n");
	for(i = 0;i<SIZE;i++){
		printf("%d\t",array[i]);
	}
	return 0;
}
/*
e a C function that use the bubble sort algorithm to sort
an integer array in ascending order (search for the bubble sorting algorithm)
*/
void bubbleSort(int *arr, int size){
	int i,j;
	for(i = 0;i<size-1;i++){
		for(j=0;j<size;j++){
			if(*(arr + j) > *(arr + j +1)){
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
}
