/*
 * main.c
 *
 *  Created on: Aug 1, 2024
 *      Author: ma479
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*function prototype*/
int oddRepititionsArray(int *,int);
/*constant definitions*/
#define SIZE 13
/*main function*/
int main(int argc,char **argv){
	int arr[SIZE] = {1,3,3,1,2,3,1,1,2,1,3,3,3};
	int oddNumber = oddRepititionsArray(arr,SIZE);
	printf("number %d is repeated with odd number of repetitions",oddNumber);
	return 0;
}
/*
	Array that contains integer values, some of these
	values are repeated with an even number of repetitions,
	and only one value is repeated with an odd number of
	repetitions. Write a C function that’s take the array as
	input and the array size and return the number which has
	odd numbers of repetitions.
 */
int oddRepititionsArray(int *arr,int size){
	int i,j,oddCount;
	int count = 0;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(arr[i] == arr[j]){
				count++;
			}
		}
		if(count%2 != 0){
			oddCount = arr[i];
			break;
		}
		else{
			count = 0;
		}
	}
	return oddCount;
}
