/*
 * main.c
 *
 *  Created on: Jul 30, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*global variables*/
int arrayOutput[256];
/*function prototype*/
int *exclusiveDecArray(int upper, int lower, int *usedSize);
/*main function*/
int main(int argc, char **argv){
	int upper,lower,i;
	int usedSize = 0;
	printf("enter lower value: ");
	fflush(stdout);
	scanf("%d",&lower);
	printf("enter upper value: ");
	fflush(stdout);
	scanf("%d",&upper);
	int *ptr = exclusiveDecArray(upper,lower,&usedSize);
	printf("the array in inclusive descending form:\n");
	for(i = 0;i<usedSize;i++){
		//printf("%d\t",*(arrayOutput + i));
		printf("%d\t",*(ptr + i));
	}
	return 0;
}
/*
 a C function to return an array containing the values
between two 8-bits unsigned integers IN DESCENDING ORDER
EXCLUSIVE. The function takes 2 values (LowerValue and
UpperValue), it shall determine the values in between, and then
arrange the sequence in descending order excluding the upper
and lower values.
If the LowerValue is greater than or equal the UpperValue, return
an array of 2 elements, both containing value = 0xFF
Example:
Input: LowerValue=2 and UpperValue=5
Output:
Output Array=4,3
Output Array Size=2
 */
int *exclusiveDecArray(int upper, int lower, int *usedSize){
	int i;
	if(lower > upper || lower == upper){
		*usedSize = 2;
		arrayOutput[0] = 0xFF;
		arrayOutput[1] = 0xFF;
	}
	else{

		for(i = upper -1;i >lower;i--){
			arrayOutput[*usedSize] = i;
			(*usedSize)++;
		}
	}
	return arrayOutput;
}

