/*
 * main.c
 *
 *  Created on: Jul 19, 2024
 *      Author: Mohamed Newir
 *      program find max number in array
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*define array size*/
#define ARR_SIZE 5

int main(int argc, char **argv)
{
	int arr[ARR_SIZE],i,max;
	printf("Enter numbers to be stored in Array\n");
	for(i = 0;i<ARR_SIZE;i++){
		printf("@ arr %d = ",i);
		fflush(stdout);
		scanf("%d",&arr[i]);
	}
	max = arr[0];
	for(i = 1;i<ARR_SIZE;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	printf("max number in array = %d",max);
	return 0;
}
