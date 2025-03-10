/*
 * main.c
 *
 *  Created on: Jul 11, 2024
 *      Author: Mohamed Newir
 *      a program that reads a positive integer and checks if it is a prime.
 *      3n tarek eny 2qsm el input 3la  2 marteen k condition b3deen a3ml check en input%2 != 0
 */


//std Libraries
#include <stdio.h>
#include <stdlib.h>

int main(int argc , char **argv){

	int i;
	char isPrime = 1;
	unsigned int num;
	printf("enter +ve number: ");
	fflush(stdout);
	scanf("%d",&num);
	/*check if number is equal 0 or 1 if yes then it isn't a prime number*/
	if(num == 0 || num == 1 ){
		isPrime = 0;
	}
	for(i = 2;i<= num/2; i++){
		if(num%i == 0 ){
			isPrime = 0;
		}
	}
	if(isPrime == 1){
		printf("%d is prime number",num);
	}
	else{
		printf("%d isn't a prime number",num);
	}

	return 0;
}
