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
int charFrequency(char,char*);
/*main function*/
int main (int argc, char **argv){
	char character;
	char string[20] = "Embedded Systems";
	printf("enter character to find its frequency in the string: ");
	fflush(stdout);
	scanf("%c",&character);
	printf("character %c appears %d times\n",character,charFrequency(character,string));
	return 0;
}
/*
a function that prints the frequency of a certain
character in a string
*/
int charFrequency(char character,char *str){
	int i,count = 0;
	for(i=0;str[i] != '\0';i++){
		if(character == *(str + i)){
			count++;
		}
	}
	return count;
}
