/*
 * main.c
 *
 *  Created on: Jul 11, 2024
 *      Author: Mohamed Newir
 *       a program to display a full pyramid using stars pattern
 */

//std libraries
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

	for(int i =0;i<=5;i++){
		for(int j =i;j<5;j++){
			printf(" ");
		}
		for(int j = 0; j< 2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

