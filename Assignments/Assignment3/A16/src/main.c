/*
 * main.c
 *
 *  Created on: Jul 30, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*constant definitions*/
#define SIZE 6
/*function prototype*/
void reverseArray(int*,int);
/*main function*/
int main(int argc, char **argv){
	int i;
	int array[SIZE] = {1,2,3,4,5,6};
	printf("array before reverse:\n");
	for(i = 0;i<SIZE;i++){
		printf("%d\t",*(array + i));
	}
	reverseArray(array,SIZE);
	printf("\narray after reverse:\n");
	for(i = 0;i<SIZE;i++){
		printf("%d\t",*(array + i));
	}
	return 0;
}
/*
a C function that takes an array as input and reverse it.
Example:
Input : 1,2,3,4,5
Output: 5,4,3,2,1
*/
void reverseArray(int *arr,int size){
	int i;
	for(i = 0;i<(size/2);i++){
		int temp = *(arr + i);
		*(arr + i) = *(arr + size - i -1);
		*(arr + size - i -1) = temp;
	}
}
