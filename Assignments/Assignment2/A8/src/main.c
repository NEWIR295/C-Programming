/*
 * main.c
 *
 *  Created on: Jul 26, 2024
 *      Author: Mohamed Newir
 */


/*
a C Function that display Prime Numbers between Intervals (two numbers) by Making Function.
*/
#include <stdio.h>

#define TRUE 1
#define FALSE 0

void print_primes(int num1,int num2)
{
	int i,j;
	int isPrime = TRUE; // flag to indicate that the number is prime or not
	for(i=num1;i<=num2;i++)
	{
		if (i == 0 || i == 1)
			continue;

		for(j=2;j<=(i/2);j++)
		{
			if(i%j == 0) // in case the reminder equals zero
			{
				isPrime = FALSE; // this number is not a prime number
				break;
			}
		}
		if(isPrime == TRUE)
		{
			printf("%d\t",i); // print in case the number is a prime number
		}
		else
		{
			isPrime = TRUE; // reset the flag value to TRUE again
		}
	}
}
