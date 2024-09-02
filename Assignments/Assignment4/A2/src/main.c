/*
 * main.c
 *
 *  Created on: Jul 31, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*function prototype*/
void stringLength(char *,int*);
/*main function*/
int main(int argc,char **argv){
	int length = 0;
	char str[20];
	printf("enter string to calculate its length: ");
	fflush(stdout);
	scanf("%s",str);
	stringLength(str,&length);
	printf("string %s length = %d",str,length);
	return 0;
}
/*
 C Program to find length of a given string using pointer
*/
void stringLength(char str[],int *length){
	int i;
	for(i = 0; str[i] != 0;i++){
		(*length)++;
	}
}
