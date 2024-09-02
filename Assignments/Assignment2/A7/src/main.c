/*
 * main.c
 *
 *  Created on: Jul 18, 2024
 *      Author: Mohamed Newir
 *      a C Function that reads two integers and checks if the first is multiple of the second.
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*function prototype*/
void check(int,int);
int main(int argc,char **argv){
	int num1,num2;
	printf("enter first number: ");
	fflush(stdout);
	scanf("%d",&num1);
	printf("enter second number: ");
	fflush(stdout);
	scanf("%d",&num2);
	check(num1,num2);
	return 0;
}
void check(int num1, int num2){
	if(num1 == num2*num2){ /*or num1%num2 == 0*/
		printf("the %d is multiple of the %d.",num1,num2);
	}
	else{
		printf("the %d is not multiple of the %d.",num1,num2);
	}
}
