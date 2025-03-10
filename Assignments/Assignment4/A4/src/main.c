/*
 * main.c
 *
 *  Created on: Jul 31, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*constant definitions*/
#define SIZE 10
/*function prototype*/
void smallestArray(int*,int,int*);
/*main function*/
int main(int argc,char **argv){
	int arr[SIZE] = {24,58,2,8,-1,8,-22,545,5,4};
	int min;
	smallestArray(arr,SIZE,&min);
	printf("the smallest number in array = %d",min);
	return 0;
}
/*
	C function to get the value of the smallest element in
	array using pointers.
*/
void smallestArray(int *arr,int size,int *min){
	int i;
	*min = arr[0];
	for(i = 0;i<size;i++){
		if(*(arr + i) < *min){
			*min = *(arr + i);
		}
	}
}
