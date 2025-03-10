/*
 * main.c
 *
 *  Created on: Jul 26, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
int checkPowerOf3(int);
int main (int argc, char **argv){
	int num,check;
	printf("enter number to be checked: ");
	fflush(stdout);
	scanf("%d",&num);
	check = checkPowerOf3(num);
	if(check == 0){
		printf("num = %d is power of 3",num);
	}else{
		printf("num = %d is not power of 3",num);
	}
	return 0;
}
/*
a C function that return 0 if a given number is a power of 3, otherwise return 1 (except 3 to the power of 0).
*/
int checkPowerOf3 (int num){
	if(num == 0 || num == 1){
		return 1;
	}
	else{
		while(1){
			if(num%3==0){
				if(num == 3){
					return 0;
				}
				num /=3;
			}
			else{
				return 1;
			}
		}
	}
}
