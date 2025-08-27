/*
Code Description:
                  Implementation of Login System where you will write a C code that 
				  ask the user to enter his ID and then the program will print his name.
                  Available IDs are:
                                    1234-> Ahmed
                                    5678 -> Youssef
                                    1145 -> Mina
                  Any other number, the program will print Wrong ID
*/

#include <stdio.h> // input/output std library

//main function -> our own entry point
void main (void){
  int ID = 0; //declare and initialize var grade with 0
  printf("Please Enter User ID ");
  scanf("%d", &ID);

  switch(ID){
    case 1234:
        printf("Welcome Ahmed!!\n");
        break;
    case 5678:
        printf("Welcome Youssef!!\n");
        break;
    case 1145:
        printf("Welcome Mina!!\n");
        break;
    default:
        printf("You Entered False ID\n");
  }
}
