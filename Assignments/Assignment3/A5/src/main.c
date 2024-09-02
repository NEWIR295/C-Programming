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
char linearSearch(int*, int,int);
/*main function*/
int main(int argc, char **argv){
	int num;
	int array[SIZE] = {1,2,3,4,4,4};
	printf("enter number to search: ");
	fflush(stdout);
	scanf("%d",&num);
	char check = linearSearch(array,SIZE,num);
	if(check == -1){
		printf("number %d doesn't exist in the array",num);
	}
	else{
		printf("number %d exists in index %d in the array",num,check);
	}
	return 0;
}
/*
 a C function to return the index of FIRST occurrence of a
number in a given array. Array index start from 0. If the item is not
in the list return -1. (Linear Search Algorithm)
Example: Array = {1,2,3,4,4,4}
The required number is 4 it should return 3
*/
char linearSearch(int *arr, int size,int target){
	int i;
	for(i = 0;i<size;i++){
		if(*(arr + i) == target){
			return i;
		}
	}
	return -1;
}
