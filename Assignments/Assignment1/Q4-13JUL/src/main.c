/*
 * main.c
 *
 *  Created on: Jul 13, 2024
 *      Author: Mohamed Newir
 *
 */

//std Libraries
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

	int num1,num2;
	printf("enter first number: ");
	fflush(stdout);
	scanf("%d",&num1);
	printf("enter second number: ");
	fflush(stdout);
	scanf("%d",&num2);
	if(num1>num2){
		printf(" start = %d > end = %d",num1, num2);
		return 0;
	}
	int i = num1+1;
	for(;i<num2;i++){
		if(i%2==0){
			printf("number %d is even\n",i);
		}
		else{
			printf("number %d is odd\n",i);
		}
	}
	return 0;
}

