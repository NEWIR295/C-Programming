/*
 * main.c
 *
 *  Created on: Aug 1, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*structure type deceleration*/
typedef struct{
	char name[20];
	int roll;
	int marks;
}student;
/*main function*/
/*
	C Program to store information (name, roll and
	marks) for a student using structure and display it.
 */
int main(int argc, char **argv){
	student s1;
	printf("enter student name: ");
	fflush(stdout);
	scanf("%s",s1.name);
	printf("enter student role: ");
	fflush(stdout);
	scanf("%d",&s1.roll);
	printf("enter student name: ");
	fflush(stdout);
	scanf("%d",&s1.marks);
	printf("\nstudent name: %s, roll: %d, marks: %d",s1.name,s1.roll,s1.marks);
	return 0;
}
