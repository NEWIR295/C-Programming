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
#define SIZE 6
/*main function*/
int main(int argc, char **argv){
	int i;
	int max;
	int array[SIZE] = {1,6,5,32,4,5};
	int *ptr[SIZE];
	for(i = 0;i<SIZE;i++){
		ptr[i] = &array[i];
	}
	max = *ptr[0];
	printf("array: \n");
	for(i = 0; i<SIZE;i++){
		printf("%d\t",*(*ptr + i));
		if(max < *(*ptr + i) ){
			max = *(*ptr + i);
		}
	}
	printf("\nmax = %d",max);
	return 0;
}
/*
	C Program to print all the array elements and the
	maximum number in array using array of pointers
*/
