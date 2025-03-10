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
#define SIZE 14
/*function prototype*/
int arraySearch(int*,int,int);
/*main function*/
int main(int argc,char **argv){
	int target;
	int array[SIZE]= {1,2,2,3,3,3,3,4,4,4,4,3,3,3};
	printf("enter number to search for consecutive Occurance: ");
	fflush(stdout);
	scanf("%d",&target);
	int consecutiveOccurance = arraySearch(array,SIZE,target);
	printf("number %d appears %d times",target,consecutiveOccurance);
	return 0;
}
/*
a C function that return the count of the longest
consecutive occurrence of a given number in an array.
Example: Array={1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3 ➔ result = 4
*/
int arraySearch(int *arr,int size,int target){
	int i;
	int consecutive = 0;
	int maxConsecutive = 0;
	for(i = 0;i<size;i++){
		if(*(arr + i) == target){
			consecutive++;
			if(maxConsecutive <= consecutive){
				maxConsecutive = consecutive;
			}
		}
		else{
			consecutive = 0;
		}
	}
	return maxConsecutive;
}
