/*
 * main.c
 *
 *  Created on: Jul 13, 2024
 *      Author: Mohamed Newir
 *		program that check if student was eligible to participate in exam or not based on user input
 */

//std lIbraries
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){

	int age, grade;
	char previousExamInfo;
// lw ha5od char mn user el afdl tb2a el awl eclipse by3ml m4akl
	printf("enter student previous exam info P or F: ");
	fflush(stdout);
	scanf("%c",&previousExamInfo);

	printf("enter student age: ");
	fflush(stdout);
	scanf("%d",&age);

	printf("enter student grade: ");
	fflush(stdout);
	scanf("%d",&grade);


	if(grade == 12 || grade == 10){
		printf("student grade is eligible\n");
	}
	else {
		printf("student isn't eligible\n");
		return 0;
	}
	if(age >=15 && age <= 18 ){
		printf("student age  is eligible\n");
	}else{
		printf("student isn't eligible\n");
		return 0;
	}
	if(previousExamInfo == 'P' || previousExamInfo == 'p'){
		printf("student exam status is eligible\n");
	}
	else{
		printf("student isn't eligible\n");\
		return 0;
	}
	printf("student is eligible\n");
	return 0;
}
