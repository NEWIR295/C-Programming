/*
 *      file name: main.c
 *      Created on: Jul 14, 2025
 *      Author: Mohamed Newir
 */
 
 #include <stdio.h>
#include "./linkedList.h"
 
int main(void){

 insertAtFirst(5);
 insertAtFirst(10);
 insertAtFirst(15);
 insertAtFirst(20);
 insertAtFirst(25);
 print();
 insertAtLast(30);
 print();
 
 updateList(25, 50);
 updateList(70, 50);
 print();
  
 findListSize();
 
 findDataPos(100);
 findDataPos(10);
 
 deleteData(200);
 deleteData(20);

}
