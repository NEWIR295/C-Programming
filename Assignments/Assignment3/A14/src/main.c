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
void reverseString(char*);
/*main function*/
int main(int argc,char **argv){
	char string[20];
	printf("enter string to reverse: ");
	fflush(stdout);
	scanf("%s",string);
	reverseString(string);
	printf("string after reverse: %s",string);
	return 0;
}
/*
a function to reverse a string by passing it to a function
 */
void reverseString(char *str){
	int length = 0;
	char temp;
	int i;
	for(i = 0;str[i] != '\0' ;i++){
		length++;
	}
	for(i =  0;i<length/2;i++){
		temp = str[i];
		str[i] = str[length -i - 1];
		str[length -i - 1] = temp;
	}
}
