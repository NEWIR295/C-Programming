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
char arrayCompare(int *,int *,int);
/*main function*/
int main (int argc,char **argv){
	int arr1[SIZE] = {1,2,3,4,5,8};
	int arr2[SIZE] = {1,2,3,4,5,8};
	int arr3[SIZE] = {1,2,3,4,5,7};
	int check = arrayCompare(arr1,arr2,SIZE);
	if(check == 0){
		printf("array1 is identical to array 2\n");
	}
	else{
		printf("array1 isn't identical to array 2\n");
	}
	check = arrayCompare(arr1,arr3,SIZE);
	if(check == 0){
		printf("array1 is identical to array 3\n");
	}
	else{
		printf("array1 isn't identical to array 3\n");
	}
	return 0;
}
/*
a C function that compare between 2 arrays with the
same length. It shall return 0 if the two arrays are identical and 1 if not
 */
char arrayCompare(int *arr1,int *arr2,int size){
	int i;
	for(i = 0;i<size;i++){
		if(arr1[i] != arr2[i]){
			return 1;
		}
	}
	return 0;
}
