/*
 * func.h
 *
 *  Created on: Aug 6, 2024
 *      Author: Mohamed Newir
 *      Description: Header File
 */

#ifndef FUNC_H_
#define FUNC_H_

/*STD Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
/*constant definitions*/
#define maxCharSize 50
enum numbers {zero,one};
/*structure deceleration*/
typedef struct {
	int id;
	char name[maxCharSize];
	int age;
	float gpa;
}student;
/*linked list node*/
struct node{
	student data;
	struct node *next;
};

/*function prototype*/
void addStudent(const student *const);
void displayStudents(void);
void searchStudentByID(int);
void updateStudent(int);
float calculateAverageGPA(void);
void searchHighestGPA(void);
void deleteStudent(int);

#endif /* FUNC_H_ */
