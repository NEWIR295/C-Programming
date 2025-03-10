/*
 * main.c
 *
 *  Created on: Aug 1, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*constant definitions*/
#define SIZE 5
/*structure prototype deceleration*/
typedef struct{
	char str[20];
	int id;
	int grade;
}student;
/*function prototype*/
void storeInfo(student*,int);
void printInfo(const student*,int);
/*main function*/
int main(int argc, char **argv){
	student s[SIZE];
	storeInfo(s,SIZE);
	printInfo(s,SIZE);
	return 0;
}
/*
	C Function to store information (name, id and grade) for 10
	students in array of structures using pointers and another
	function to print all the structures using pointers.
 */
void storeInfo(student *ptr_str,int size){
	int i;
	printf("enter info for 10 students:\n");
	for(i = 0;i<size;i++){
		printf("student %d info\n",i+1);
		printf("student %d name: ",i+1);
		fflush(stdout);
		scanf("%s",ptr_str->str);
		printf("student %d id: ",i+1);
		fflush(stdout);
		scanf("%d",&(ptr_str->id));
		printf("student %d grade: ",i+1);
		fflush(stdout);
		scanf("%d",&(ptr_str->grade));
		ptr_str++;

	}
}
void printInfo(const student *ptr_str,int size){
	int i;
	printf("info for 10 students:\n");
	for(i = 0;i<size;i++){
		printf("student %d info\n",i+1);
		printf("student %d name: %s\n",i+1,(ptr_str + i)->str);
		printf("student %d id: %d\n",i+1,(ptr_str + i)->id);
		printf("student %d grade: %d\n",i+1,(ptr_str + i)->grade);
	}
}
