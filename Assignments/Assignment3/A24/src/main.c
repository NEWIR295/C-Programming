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
int searchFor2ndLargest(int*,int);
/*main function*/
int main(int argc, char **argv){
	int arr[SIZE] = {66,11,-1,98,5,77};
	int sndMax = searchFor2ndLargest(arr,SIZE);
	printf("2nd largest in the array = %d",sndMax);
	return 0;
}
/*
a C function to find the second largest number in an array and return its value.
 */
int searchFor2ndLargest(int *arr,int size){
	int sndMax = 0;
	int maxIndex = 0;
	int arrMax =  0;
	int i;
	for(i = 0; i<size;i++){
		if(arrMax < arr[i]){
			arrMax = arr[i];
			maxIndex = i;
		}

	}
	for(i = 0; i<size;i++){
		if(i == maxIndex){
			continue;
		}
		if(sndMax < arr[i]){
			sndMax = arr[i];		}
	}
	return sndMax;
}
