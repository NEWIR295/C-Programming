/*
 * main.c
 *
 *  Created on: Jul 29, 2024
 *      Author: ma479
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*function prototype*/
void convertStringLower(char str[]);
/*main function*/
int main (int argc,char **argv){
	char string[20] = "NEWIR";
	convertStringLower(string);
	printf("string after converting: %s",string);
	return 0;
}
/*
 a function which, given a string, converts all uppercase
letters to lowercase, leaving the others unchanged
*/
void convertStringLower(char str[]){
	int i;
	for(i = 0;str[i] != '\0';i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] +=32;
		}
	}
}
