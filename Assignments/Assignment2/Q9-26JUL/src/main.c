/*
 * main.c
 *
 *  Created on: Jul 26, 2024
 *      Author: Mohamed Newir
 */
#define SIZE 6
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*function prototype*/
int multiDimArraySum(int a[2][2]);
int main(int argc,char **argv){
	int arr[2][2]={{2,3},{5,6}};
	int sum = multiDimArraySum(arr);
	printf("sum of elements in the array = %d",sum);
	return 0;
}
/*function that calculate sum of elements in multi-dimensional array*/
int multiDimArraySum(int a[2][2]){
	int sum =0;
	int i,j;
	for(i =0;i<2;i++){
		for(j=0;j<2;j++){
			sum += a[i][j];
		}
	}
	return sum;
}
