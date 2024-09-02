/*
 * main.c
 *
 *  Created on: Aug 1, 2024
 *      Author: MOHAMED NEWIR
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*function prototype*/
void swapPtr(int**,int**);
/*main function*/
int main (int argc,char **argv){
	int x = 5,y = 10;
	int *ptr1 = &x;
	int *ptr2 = &y;
	printf("ptrs before swap: ptr1 = %d, ptr2 = %d",*ptr1,*ptr2);
	swapPtr(&ptr1,&ptr2);
	printf("\nptrs after swap: ptr1 = %d, ptr2 = %d",*ptr1,*ptr2);
	return 0;
}
/*
	Write a c function two SWAP two pointers.
	Hint: use pointer to pointer as a function argument
*/
void swapPtr(int **ptr1, int **ptr2){
	int *temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
