/*
 * main.c
 *
 *  Created on: Jul 31, 2024
 *      Author: ma479
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*function prototype*/
void swap(unsigned int*,unsigned int*);
/*main function*/
int main(int argc,char **argv){
	unsigned int x = 5;
	unsigned int y = 7;
	void (*ptr)(int unsigned*,int unsigned*) = swap;
	printf("x = %d, y = %d\n",x,y);
	(*ptr)(&x,&y);
	printf("x = %d, y = %d\n",x,y);
	return 0;
}
/*
	C function to swap two numbers using bitwise
	operation and call it using pointer to function.
*/
void swap(unsigned int *x,unsigned  int *y){
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
