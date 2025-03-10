/*
 * main.c
 *
 *  Created on: Jul 29, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Function Prototype*/
int stringCheck(char str[]);
/*constant definitions*/
#define TRUE 1
#define FALSE 0
#define SIZE 20
/*main function*/
int main(int argc, char **argv){
	char str[SIZE], check;
	printf("enter string to check: ");
	fflush(stdout);
	scanf("%s",str);
	check = stringCheck(str);
	if(check == TRUE){
		printf("all characters are distinct\n");
	}
	else{
		printf("characters aren't distinct\n");
	}
	return 0;
}
/*
 a function which, given a string, return TRUE if all
characters are distinct and FALSE if any character is repeated.
*/
int stringCheck(char str[]){
		int size = strlen(str);
		int i,j;
		for(i = 0;i<size;i++){
			for(j = i+1;j<size;j++){
				if(str[i] != str[j]){
					continue;
				}
				else{
					return FALSE;
				}
			}
		}
		return TRUE;
}
