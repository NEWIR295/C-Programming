/*
 * main.c
 *
 *  Created on: Jul 17, 2024
 *      Author: Mohamed Newir
 *		a C Function that prints the cube of any number.
 */

/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*func prototype*/
void cube (int);

int main (int argc, char **argv){

	int num;
	printf("enter cube length: ");
	fflush(stdout);
	scanf("%d",&num);
	cube(num);
	return 0;
}
/*func definition*/
void cube (int num){
	int i,j;
	for(i = 0;i<num;i++){
		for(j = 0;j<num;j++){
			printf("*");
		}
		printf("\n");
	}
	return;
}
