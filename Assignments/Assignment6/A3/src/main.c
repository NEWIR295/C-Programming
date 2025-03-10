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
int list5element(void);
/*main function*/
int main(int argc, char **argv){
	int data = 0;
	insertAtLast(11);
	insertAtLast(3);
	insertAtLast(10);
	insertAtLast(100);
	insertAtLast(23);
	insertAtLast(5);
	insertAtLast(700);
	insertAtLast(100);
	insertAtLast(23);
	insertAtLast(5);
	insertAtLast(50);
	printList();
	data = list5element();
	if(data != -1){
		printf("max data in list = %d\n",data);
	}
	return 0;
}
/*
	a C function that returns the data inside the 5 th element
	from the end of linked list and in case the linked list contains only
	one node return the data inside this node.
*/
int list5element(void){
	int step = 0;
	struct node *current = head;
	struct node *ptr = head;
	if(head == NULL){
		printf("list is empty\n");
		return -1;
	}
	if(head->next == NULL){
		return head->data;
	}
	while(current != NULL){
		current = current->next;
		if(step >= 5){
			ptr = ptr->next;
		}
		step++;
	}
	return ptr->data;
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



