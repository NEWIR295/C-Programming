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
/*function Prototype*/
char reverseLinearSearch(int *,int,int);
/*Main Function*/
int main(int argc, char **argv){
	int array[SIZE] = {1,2,3,4,4,4};
	int num;
	printf("enter number to search: ");
	fflush(stdout);
	scanf("%d",&num);
	int check = reverseLinearSearch(array,SIZE,num);
	if(check == -1){
		printf("number %d doesn't exist in the array",num);
	}
	else{
		printf("number %d exist in index %d in the array",num,check);
	}
	return 0;
}
/*
a C function to return the index of LAST occurrence of a
number in a given array. Array index start from 0. If the item is not
in the list return -1. (Linear Search Algorithm)
Example:Array = {1,2,3,4,4,4}
The required number is 4 it should return 5
*/
char reverseLinearSearch(int *arr,int size,int num){
	int i;
	for(i = size-1;i >=0;i--){
		if(*(arr + i) == num){
			return i;
		}
	}
	return -1;
}
