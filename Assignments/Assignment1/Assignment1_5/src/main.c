/*
 * main.c
 *
 *  Created on: Jul 11, 2024
 *      Author: Mohamed Newir
 *      a program to print the ASCII value of a character input by the user.
 */

//std libraries
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

	char input;
	printf("enter char to convert to ASCI: ");
	fflush(stdout);
	scanf("%c",&input);
	printf("ASCI VALUE = %d ",input);

	return 0;
}

