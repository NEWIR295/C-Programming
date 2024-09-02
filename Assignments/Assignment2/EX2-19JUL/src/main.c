/*
 * main.c
 *
 *  Created on: Jul 19, 2024
 *      Author: Mohamed Newir
 *      program search number in array
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
/*function prototype*/
int linearSearch(int a[],int n,int element);
int main(int argc, char ** argv){
	int arr[SIZE] = {5,7,9,15,17};
	int num,flag;
	printf("enter number to search: ");
	fflush(stdout);
	scanf("%d",&num);
	flag = linearSearch(arr,SIZE,num);
	if(flag == -1){
		printf("no element in arr = %d",num);
	}
	else{
		printf("element %d is in index %d",num,flag);
	}

	return 0;
}

int linearSearch(int a[],int n, int element){
	int flag = -1;
	int i;
	for(i =0;i<n;i++){
		if(a[i]== element){
			return i;
		}
	}
	return flag;
}
