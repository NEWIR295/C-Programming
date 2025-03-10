/*
 * main.c
 *
 *  Created on: Jul 19, 2024
 *      Author: ma479
 */
#define TRUE 1
#define FALSE 0
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*function prototype*/
int check(int);
int main(int argc, char **argv){
	int num,nChecked;
	printf("enter number to be checked: ");
	fflush(stdout);
	scanf("%d",&num);
	nChecked = check(num);
	if(nChecked == TRUE){
		printf("%d is power of 2",num);
	}
	else{
		printf("%d is not power of 2",num);
	}
	return 0;
}
/*
a C function that returns 1 if the input number is a power of 2
and return 0 if the input number is not power of 2.
For example: 1, 2 and 16 are power of 2.
0, 10 and 30 are not power of 2.
 */
int check(int num){
	if(num == 0){
		return FALSE;
	}
	else if(num == 1){
		return TRUE;
	}
	else{
		while(1){
			if(num %2 == 0){
				if(num == 2){
					return TRUE;
				}
				num /= 2;
			}
			else{
				return FALSE;
			}
		}
	}
}
