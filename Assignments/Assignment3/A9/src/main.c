/*
 * main.c
 *
 *  Created on: Jul 29, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*function Prototype*/
int fibonacciRecursion(int);
int fibonacciLoop(int);
/*main function*/
int main(int argc,char **argv){
	int num;
	printf("enter number to get its fibonacci: ");
	fflush(stdout);
	scanf("%d",&num);
	printf("fibonacci by recursion = %d\n",fibonacciRecursion(num));
	printf("fibonacci by loop = %d",fibonacciLoop(num));
	return 0;
}
/*
The sequence of numbers 1, 1, 2, 3, 5, 8, 13, … is called
Fibonacci numbers; each is the sum of the preceding 2. Write a
program which given n, returns the nth Fibonacci number.
- with for/while
- with recursion
*/
/*with loop*/
int fibonacciLoop(int num){
	if(num == 0 || num == 1){
		return num;
	}
	int a=0,b=1,c,i;
	for(i = 2;i<=num;i++){
		c = a+b;
		a = b;
		b = c;
	}
	return b;
}

/*with recursion*/
int fibonacciRecursion(int num){
	if(num == 0 || num == 1){
		return num;
	}
	return fibonacciRecursion(num - 1) + fibonacciRecursion(num - 2);
}
