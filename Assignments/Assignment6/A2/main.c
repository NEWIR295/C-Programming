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
int findListSize(void);
int retriveMiddleData(void);
/*main function*/
int main(int argc,char **argv){
	int size,i,data,sizeA,middleData;
	printf("enter list size: ");
	fflush(stdout);
	scanf("%d",&size);
	for(i = 0;i<size;i++){
		printf("enter data to insert im the list: ");
		fflush(stdout);
		scanf("%d",&data);
		insertAtLast(data);
	}
	printList();
	sizeA = findListSize();
	if(sizeA != -1){
		printf("list size = %d\n",sizeA);
	}
	middleData = retriveMiddleData();
	printf("middle data = %d\n",middleData);
	return 0;
}
/*
	a C Function that returns the data of the middle node in
	a linked list and in case the linked list contains only one node
	return the data inside this node.
*/
int retriveMiddleData(void){
	int middleData;
	int count = 0;
	int middlePos = findListSize()/2 ;
	struct node *ptr = NULL;
	if(head == NULL){
		printf("list is empty\n");
		return -1;
	}
	ptr = head;
	while(ptr != NULL){
		if(count == middlePos){
			middleData = ptr->data;
			break;
		}
		count++;
		ptr = ptr->next;
	}
	return middleData;
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
