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
#define TRUE 1
#define FALSE 0
/*function prototype*/
int removeRepeatedN(int *,int,int *, int *);
/*main function*/
/*main function*/
int main (int argc,char **argv){
	int arr1[10] = {1,2,3,3,3,4,4,5,5,5};
	int arr[10];
	int size = 0;
	int i;
	int check = removeRepeatedN(arr1,10,arr,&size);
	if(check == FALSE){
		printf("error\n");
	}
	else{
		for(i = 0;i<size;i++){
			printf("%d\t",arr[i]);
		}
	}
	return 0;
}
/*
a c function that removes the repeated number of an
input sorted array and return a new array without the repeated
numbers. The function shall return error if the size of the input
array is ZERO. The function takes four inputs:
a. Old array. b. Old array size. c. New array (empty array).
d. The size of the new array after fill it in the function.
int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new)
Example: arr1 = {1,2,3,3,3,4,4,5,5,5} → arr2 = {1,2,3,4,5}
*/
int removeRepeatedN(int *arr1,int size1,int *arr2, int *size2){
	int i = 0;
	if(size1 == 0){
		return FALSE;
	}
	for(i = 0;i<size1-1;i++){
		if(arr1[i] != arr1[i+1]){
			arr2[*size2] = arr1[i];
			(*size2)++;
		}
	}
	arr2[*size2] = arr1[i];
	(*size2)++;
	return TRUE;
}
