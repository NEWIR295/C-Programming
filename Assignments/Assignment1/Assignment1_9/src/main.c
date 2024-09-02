/*
 * main.c
 *
 *  Created on: Jul 11, 2024
 *      Author: Mohamed Newir
 *       a program that reads a student grade percentage and prints "Excellent" if his grade is greater than or equal 85, "Very Good" for 75 or greater;
 *       "Good" for 65, "Pass" for 50, "Fail" for less than 50.
 *
 */

//std Libraries
#include <stdio.h>
#include <stdlib.h>

int main(int argc , char **argv){
	int grade;
	printf("Enter your grade: ");
	fflush(stdout);
	scanf("%d",&grade);
	if(grade >= 85){
		printf("Excellent");
	}
	else if(grade >=75){
		printf("Very Good");
	}
	else if(grade >=65){
		printf("Good");
	}
	else if(grade >= 50){
		printf("Pass");
	}
	else{
		printf("Fail");
	}
	return 0;
}
