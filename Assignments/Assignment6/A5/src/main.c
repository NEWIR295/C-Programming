/*
 * main.c
 *
 *  Created on: Aug 5, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*structure deceleration*/
struct node{
	int data;
	struct node *next;
};
/*global variables*/
struct node *head = NULL;
/*function prototype*/
void insertAtLast(int);
void printList(void);
void listMaxData(int*);
/*main function*/
int main(int argc, char **argv){
	int max = 0;
	insertAtLast(11);
	insertAtLast(3);
	insertAtLast(10);
	insertAtLast(100);
	insertAtLast(23);
	insertAtLast(5);
	insertAtLast(50);
	printList();
	listMaxData(&max);
	if(max != -1){
		printf("max data in list = %d\n",max);
	}
	return 0;
}

/*
	a C function that returns the maximum data value in the
	linked list.
*/
void listMaxData(int *max){
	struct node *current = NULL;
	if(head == NULL){
		printf("list is empty\n");
		*max = -1;
	}
	current = head;
	while(current != NULL){
		if(current->data > *max){
			*max = current->data;
		}
		current = current->next;
	}
}
void insertAtLast(int data){
	struct node *link =(struct node*)malloc(sizeof(struct node));
	struct node *current = NULL;
	link->data = data;
	link->next = NULL;

	if(head == NULL){
		head = link;
		return;
	}
	current = head;
	while(current->next != NULL){
		current = current->next;
	}
	current->next = link;
}
void printList(void){
	struct node *current = NULL;
	if(head == NULL){
		printf("list is empty\n");
		return;
	}
	current = head;
	while(current != NULL){
		printf("%d =>\t",current->data);
		current = current->next;
	}
	printf("\n");
}


