/*
 * main.c
 *
 *  Created on: Jul 17, 2024
 *      Author: Mohamed Newir
 *      a C Function that takes one character and checks if it alphabet or not.
 */

/*std libraries*/
#include <stdio.h>
#include <stdlib.h>

/*function prototype*/
void checkAlpha(char);
int main(int argc, char **argv){
	char character;
	printf("enter character to be checked: ");
	fflush(stdout);
	scanf("%c",&character);
	checkAlpha(character);
	return 0;
}
void checkAlpha(char character){
	if((character >= 65 ) && (character <= 90)){
		printf("yeah it's capital alphabet");
	}
	else if((character >= 97 ) && (character <= 122)){
		printf("yeah it's small alphabet");
	}
	else{
		printf("yeah it'snot an alphabet");
	}
	return;
}
