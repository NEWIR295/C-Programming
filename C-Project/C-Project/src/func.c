/*
 * func.c
 *
 *  Created on: Aug 6, 2024
 *      Author: Mohamed Newir
 *      Description: Function File
 */

#include "func.h"
/*global variables*/
struct node *head = NULL;
/*Functions Definitions */
/*Function For Adding New Students In The List*/
void addStudent(const student *const ptr){
	struct node *current = head;
	while(current != NULL){
		if(current->data.id == ptr->id){
			printf("ERROR: ID Existed\n");
			return;
		}
		current = current->next;
	}
	struct node *link = (struct node*)malloc(sizeof(struct node));
	assert(link != NULL);
	link->data.age = ptr->age;
	link->data.gpa = ptr->gpa;
	link->data.id = ptr->id;
	strcpy(link->data.name,ptr->name);
	link->next = NULL;
	if(head == NULL){
		head = link;
		printf("\n\tNew Student Added Successfully\n");
		return;
	}
	current = head;
	while(current->next != NULL){
		current = current->next;
	}
	current->next = link;
	printf("\n\tNew Student Added Successfully\n");
}
/*Function For Displaying Students List*/
void displayStudents(void){
	if(head == NULL){
		printf("\n\tStudent List Is Empty\n");
		return;
	}
	int count = one;
	struct node *current = head;
	while(current != NULL){
		printf("\tStudent %d:\n"
				"\t\tStudent name: %s\t"
				"Student ID: %d\t"
				"Student age: %d\t"
				"Student GPA: %f\n",count,current->data.name,
				current->data.id,current->data.age,
				current->data.gpa);
		count++;
		current = current->next;
	}
}
/*Function For Student Searching By ID*/
void searchStudentByID(int id){
	if(head == NULL){
		printf("\n\tStudent List Is Empty\n");
		return;
	}
	int count = 1;
	struct node *current = head;
	while(current != NULL){
		if(current->data.id == id){
			printf("\tStudent %d Found:\n"
					"\t\tStudent %d details:\n"
					"\t\tStudent name: %s\t"
					"Student ID: %d\t"
					"Student age: %d\t"
					"Student GPA: %f\n",count,count,current->data.name,
					current->data.id,current->data.age,
					current->data.gpa);
			return;
		}
		count++;
		current = current->next;
	}
	printf("\tStudent Is Not Found\n");
}
/*Function For Updating Student Info In The List*/
void updateStudent(int id){
	if(head == NULL){
		printf("\n\tStudent List Is Empty\n");
		return;
	}
	struct node *current  = head;
	while(current != NULL){
		if(current->data.id == id){
			printf("\tEnter Student Data To Be Updated:\n");
			printf("\t\tEnter The Updated Student Name: ");
			fflush(stdout);
			scanf("%s",current->data.name);
			printf("\t\tEnter The Updated Student Age: ");
			fflush(stdout);
			scanf("%d",&current->data.age);
			printf("\t\tEnter The Updated Student GPA: ");
			fflush(stdout);
			scanf("%f",&current->data.gpa);
			printf("\n\tStudent Information Updated Successfully\n");
			return;
		}
		current = current->next;
	}
	printf("\n\tStudent Is Not Found\n");
}
/*Function For Calculating Students Average GPA*/
float calculateAverageGPA(void){
	if(head == NULL){
		printf("\n\tStudent List Is Empty\n");
		return zero;
	}
	float AverageGpa;
	int count = zero;
	float sum = zero;
	struct node *current = head;
	while(current != NULL){
		sum += current->data.gpa;
		count++;
		current = current->next;
	}
	AverageGpa = sum/count;
	return AverageGpa;
}
/*Function For Searching For Students Highest GPA*/
void searchHighestGPA(void){
	if(head == NULL){
		printf("\n\tStudent List Is empty\n");
		return;
	}
	float max = zero;
	struct node * current = head;
	struct node *higestGpaStudent = NULL;
	while(current != NULL){
		if(current->data.gpa >max){
			max = current->data.gpa;
			higestGpaStudent = current;
		}
		current = current->next;
	}
	printf("\tHighest GPA Student details:\n"
			"\t\tStudent name: %s\t"
			"Student ID: %d\t"
			"Student age: %d\t"
			"Student GPA: %f\n",higestGpaStudent->data.name,
			higestGpaStudent->data.id,higestGpaStudent->data.age,
			higestGpaStudent->data.gpa);
}
/*Function For Deleting Student In The List*/
void deleteStudent(int id){
	if(head == NULL){
		printf("\n\tStudent List Is empty\n");
		return;
	}
	struct node *current = head;
	struct node *prev = NULL;
	struct node *delete = NULL;
	/*Handling Deleted Student If It Located In Head Position*/
	if(head->data.id == id){
		delete = head;
		head = head->next;
		printf("\tList Containing Student With ID: %d is Deleted\n",id);
		free(delete);
		return;
	}
	while(current != NULL){
		if(current->data.id == id){
			delete = current;
			prev->next = current->next;
			printf("\tList Containing Student With ID: %d is Deleted\n",id);
			free(delete);
			return;
		}
		prev = current;
		current = current->next;
	}
	if(delete == NULL){
		printf("\tStudent With ID: %d Not Found\n",id);
	}
}
