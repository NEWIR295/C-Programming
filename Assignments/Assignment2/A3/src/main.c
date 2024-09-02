/*
 * main.c
 *
 *  Created on: Jul 18, 2024
 *      Author: Mohamed Newir
 *      a C Function that check if the number if positive or negative.
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*function polarity*/
void checkPolarity(signed int);
int main(int argc, char **argv){
	signed int num;
	printf("enter number to check its polarity: ");
	fflush(stdout);
	scanf("%d",&num);
	checkPolarity(num);
	return 0;
}
void checkPolarity(signed int num){
	if(num > 0){
		printf("%d is +ve\n",num);
	}
	else if(num<0){
		printf("%d is -ve\n",num);
	}
	else{
		printf("bro its zero!!\n");
	}
}
