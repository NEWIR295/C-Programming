/*
 *      file name: linkedList.h
 *      Created on: Jul 14, 2025
 *      Author: Mohamed Newir
 */
 
 #ifndef LINKED_LIST
 #define LINKED_LIST
 
 void insertAtFirst(int data);
 void insertAtLast(int data);
 void print(void);
 void updateList(int dataOld, int dataNew);
 int findListSize(void);
 int findDataPos(int data);
 void deleteData(int data);
 
 #endif
