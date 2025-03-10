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
void reverseArray(int*,int);
/*main function*/
int main(int argc,char **argv){
	int i;
	int arr[SIZE];
	int *ptr = arr;
	printf("enter numbers for array:\n");
	for(i = 0;i<SIZE;i++){
		fflush(stdout);
		scanf("%d",arr+i);
	}
	printf("reverse by ptr:\n");
	for(i = SIZE - 1;i >=0;i--){
		printf("%d\t",*(ptr + i));
	}
	reverseArray(arr,SIZE);
	printf("\nreverse by array reverse function:\n");
	for(i = 0;i<SIZE;i++){
		printf("%d\t",*(arr + i));
	}
	return 0;
}
/*
C Program to read 10 integers into an array from user and
print them in reversing order using pointers.
 */
void reverseArray(int *arr,int size){
	int i,temp;
	for(i = 0;i<size/2;i++){
		temp = arr[i];
		arr[i] = arr[size -i -1];
		arr[size -i -1] = temp;
	}
}
