/*
 * main.c
 *
 *  Created on: Jul 19, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*function prototype*/
char alphapetConvert(char);
int main(int argc, char **argv){
	char character;
	printf("enter character: ");
	fflush(stdout);
	scanf("%c",&character);
	printf("new character = %c\n",alphapetConvert(character));
	return 0;
}
char alphapetConvert(char character){
	if(character >= 97 && character <=122){
		return character-32;
	}
	else{
		return character;
	}
}



