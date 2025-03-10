/*
 * main.c
 *
 *  Created on: Aug 1, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*function prototype*/
void createString(char strOld[], char strNew[]);
/*main function*/
int main (int argc,char **argv){
	char str[20];
	char strNew[4];
	printf("enter string: ");
	fflush(stdout);
	scanf("%s",str);
	createString(str,strNew);
	printf("new string: %s",strNew);
	return 0;
}
/*
	Given a string, create a new string made up of its last
	two letters, reversed and separated by a space, the word
	is “bat”. Return string contains ”t a”
*/
void createString(char strOld[],char strNew[]){
	int length = strlen(strOld);
	strNew[0] = strOld[length-1];
	strNew[1] = ' ';
	strNew[2] = strOld[length -2];
	strNew[4] = '\0';
}
