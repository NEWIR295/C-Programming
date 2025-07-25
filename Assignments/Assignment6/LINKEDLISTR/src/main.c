/*
 * main.c
 *
 *  Created on: Aug 5, 2024
 *      Author: Mohamed Newir
 */
/*STD LIBRARIES*/
#include <stdio.h>
#include <stdlib.h>
/*structure deceleration*/
struct node{
	int data;
	struct node *next;
};
/*global variables*/
struct node *head =NULL;
/*function prototypes*/
void insertAtFirst(int);
void insertAtLast(int);
void printList(void);
void updateList(int,int);
void deleteList(int);
int findListSize(void);
int findDataPos(int);
/*main function*/
int main(int argc,char**argv){

	return 0;
}
/*functions definition*/
void insertAtFirst(int data){
	struct node *link =(struct node*)malloc(sizeof(struct node));
	link->data = data;
	link->next = head;
	head = link;
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
}
void updateList(int new,int old){
	int pos = 0;
	struct node *current = NULL;
	if(head == NULL){
		printf("list is empty");
		return;
	}
	current = head;
	while(current != NULL){
		if(current->data == old){
			current->data = new;
			printf("%d in list %d replaced with %d\n",old,pos,new);
			return;
		}
		pos++;
		current = current->next;
	}
	printf("%d not found in the list to be replaced\n",old);
}
void deleteList(int data){
	int pos = 0;
	struct node *current = NULL;
	struct node *prev = NULL;
	struct node *delete = NULL;
	if(head == NULL){
		printf("list is empty\n");
		return;
	}
	current = head;
	while(current != NULL){
		if(current->data == data){
			delete = current;
			prev->next = current->next;
			printf("list %d containing data = %d deleted\n",pos,data);
			free(delete);
			return;
		}
		pos++;
		prev = current;
		current = current->next;
	}
	if(delete == NULL){
		printf("%d not found in the list to be deleted\n",data);
		return;
	}

}
int findListSize(void){
	int size = 0;
	struct node *current = NULL;
	if(head == NULL){
		printf("list is empty");
		return -1;
	}
	current = head;
	while(current != NULL){
		size++;
		current = current->next;
	}
	return size;
}
int findDataPos(int data){
	int pos = 0;
	struct node *current = NULL;
	if(head == NULL){
		printf("list is empty\n");
		return -1;
	}
	current = head;
	while(current != NULL){
		if(current->data == data){
			return pos;
		}
		pos++;
		current = current->next;
	}
	printf("%d not located in the list\n",data);
	return -1;
}
