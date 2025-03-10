/*
 * main.c
 *
 *  Created on: Jul 19, 2024
 *      Author: Mohamed Newir
 *      a C Function that swaps the value of two integer numbers.
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*function prototype*/
void swap(int *numptr1,int*numptr2);
int main (int argc, char **argv){
	int num1,num2;
	printf("enter 1st number: ");
	fflush(stdout);
	scanf("%d",&num1);
	printf("enter 2nd number: ");
	fflush(stdout);
	scanf("%d",&num2);
	swap(&num1,&num2);
	printf("1st num =%d, 2nd num = %d",num1,num2);
	return 0;
}
void swap(int *numptr1, int *numptr2){
	int temp;
	temp = *numptr1;
	*numptr1 = *numptr2;
	*numptr2 = temp;
	/*
	ANOTHER SOLUTION
	*numptr1 = *numptr1 + *numptr2
	*numptr2 = *numptr1 - *numptr2
	*numptr1 = *numptr1 - *numptr2
	*/
}
