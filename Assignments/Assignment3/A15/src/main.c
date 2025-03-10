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
void concatenateString(char*,char*,char*);
/*main function*/
int main(int argc, char **argv){
	char str1[20] = "NEWIR",str2[20] = "529",str[40];
	concatenateString(str1,str2,str);
	printf("%s",str);
	return 0;
}
/*
a function to concatenate two strings without using strcat function.
*/
void concatenateString(char *str1, char *str2,char *str){
	int i,j;
	for(i = 0; str1[i] != '\0';i++){
		str[i] = str1[i];
	}
	for(j = 0;str[j] != '\0';i++,j++){
		str[i] = str2[j];
	}
	str[i] = '\0';
}
