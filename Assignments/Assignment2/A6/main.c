/*
 * main.c
 *
 *  Created on: Jul 18, 2024
 *      Author: Mohamed Newir
*	C Function that converts the any letter from lowercase to uppercase.
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*function prototype*/
void convertAlphapet(char);
int main(int argc, char **argv){
	char character;
	printf("enter lower case character to convert: ");
	fflush(stdout);
	scanf("%c",&character);
	convertAlphapet(character);
	return 0;
}
void convertAlphapet(char character){
	if(character>= 65 && character<=90){
		printf("character %c is already an upercase character\n",character);
	}
	else if(character>= 97 && character<=122){
		printf("character %c is the lowercase of character %c\n",character,character-32);
	}
}
