/*
 * main.c
 *
 *  Created on: Jul 18, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdlib.h>
#include <stdio.h>

#define odd 1
#define even 0
/*function prototype*/
int check (int);
int main(int argc,char **argv){
	int num;
	printf("enter number to be checked: ");
	fflush(stdout);
	scanf("%d",&num);
	if(check(num) == odd){
		printf("%d is odd number\n",num);
	}
	else{
		printf("%d is even number\n",num);
	}
	return 0;
}
/*
a C function to check if the input is an even number or an odd
number, if even number return 0 if odd number return 1.
Example:
Input 7, Output = 1 (Odd)
Input 6, Output = 0 (Even)
*/
int check(int num){
	if(num%2 == 0){
		return even;
	}
	else{
		return odd;
	}
}
