/*
 * main.c
 *
 *  Created on: Jul 13, 2024
 *      Author: Mohamed Newir
 *		program that categorize age groups
 */


//std Libraries
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){

	int age;
	printf("enter age to categorize: ");
	fflush(stdout);
	scanf("%d",&age);

	if(age >= 0 && age <=12){
		printf("child");
	}
	else if(age >= 13 && age <=19){
		printf("teenager");
	}
	else if(age >= 20 && age <=35){
		printf("young adult");
	}
	else if(age >= 36 && age <=55){
		printf("adult");
	}
	else if(age >= 56){
		printf("senior");
	}
	return 0;
}
