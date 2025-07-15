/*
 *      file name: linkedList.c
 *      Created on: Jul 14, 2025
 *      Author: Mohamed Newir
 */

#include <stdio.h>
#include <stdlib.h>
#include "./linkedList.h"

//#define NULL (void*)0

struct node{
	int data;
	struct node *next;
};

struct node *head = NULL;

void insertAtFirst(int data){
	struct node * link = (struct node *) malloc(sizeof(struct node));
	link -> data = data;
	link -> next = head;
	head = link;
}

void insertAtLast(int data){
	struct node *link = (struct node *) malloc(sizeof(struct node));
	struct node *current = NULL;
	link -> data = data;
	link -> next = NULL;
	if(head == NULL){
		head = link;
		return;
	}
	current = head;
	while(current -> next != NULL){
		current = current -> next;
	}
	current -> next= link;
}

void print(void){
	int pos = 0;
	struct node *current = NULL;
	if(head == NULL){
		printf("Linked List is empty\n");
		return;
	}
	current = head;
	while(current != NULL){
		printf("At pos %d: %d\n", pos, current -> data);
		pos++;
		current =  current -> next;
	}
}


void updateList(int dataOld, int dataNew){
	struct node *current = NULL;
	int pos = 0;
	if(head == NULL){
		printf("Linked List is empty\n");
		return;
	}
	current = head;
	while(current != NULL){
		if(current -> data == dataOld){
			current -> data = dataNew;
			printf("Pos %d updated to %d\n", pos, current -> data);
			return;
		}
		pos++;
		current = current -> next;
	}
	printf("%d not found in the list\n", dataOld);
}


int findListSize(void){
	struct node *current = NULL;
	int size = 0;
	if(head == NULL){
		printf("Linked List is empty\n");
		return -1;
	}
	current = head;
	while(current != NULL){
		size++;
		current = current -> next;
	}
	printf("List size = %d\n", size);
	return size;
}

int findDataPos(int data){
	int pos = 0;
	struct node *current = NULL;
	if(head == NULL){
		printf("Linked List is empty\n");
		return -1;	
	}
	current = head;
	while(current != NULL){
		if(current -> data == data){
			printf("Data found at pos %d\n", pos);
			return pos;
		}
		pos++;
		current = current->next ;
	}
	printf("Data not found\n");
	return -1;
}

void deleteData(int data){
	struct node *delete = NULL;
	struct node *prev = NULL;
	struct node *current = NULL;
	if(head == NULL){
		printf("Linked List is empty\n");
		return;
	}
	current = head;
	while(current != NULL){
		if(current -> data == data){
			delete = current;
			prev -> next = current-> next;
			free(delete); 
			printf("%d delted\n", data);
			return;
		}
		prev = current;
		current = current -> next;
	}
	if(delete == NULL){
		printf("%d not found in the list\n", data);
	}
}































