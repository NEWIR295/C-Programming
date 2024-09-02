/*
 * main.c
 *
 *  Created on: Jul 29, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*function prototype*/
int stringLength(char*);
/*main function*/
int main(int argc,char**argv){
	char string[20];
	printf("enter string to count its length: ");
	fflush(stdout);
	scanf("%s",string);
	printf("string length = %d",stringLength(string));
	return 0;
}
/*
 a function to find the length of a string.
*/
int stringLength(char *string){
	int i;
	int length = 0;
	/*
	 * الاحسن بدل متعمل متغير لطول تكتفي بانك تبعت ال
	 * i
	 */
	for(i = 0;string[i] != '\0';i++){
		length++;
	}
	return length;
}
