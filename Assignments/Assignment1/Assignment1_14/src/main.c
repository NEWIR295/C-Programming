/*
 * main.c
 *
 *  Created on: Jul 11, 2024
 *      Author: Mohamed Newir
 *      a program to display English alphabets from A to Z.
 */

//std libraries
#include <stdio.h>
#include <stdlib.h>

int main(int argc , char ** argv){

	for(char i ='A'; i<='Z';i++){
		printf("%c ",i);
	}
	return 0;
}
