/*
 * main.c
 *
 *  Created on: Aug 1, 2024
 *      Author: ma479
 */
/*std Libraries*/
#include <stdio.h>
#include <stdlib.h>
/*main function*/
/*
  a c program that SWAP the value of the two 16-
  bits of 32-bits integer number
*/
int main(int argc,char **argv){
	short temp1,temp2;
	int x = 0xFFFFAAAA;
	printf("before swap: %X\n",x);
	short *ptr = (short*)&x;
	//short *ptr2 =&x
	temp1 = *ptr;
	ptr++;
	temp2 = *ptr;
	*ptr = temp1;
	ptr--;
	*ptr = temp2;
	printf("after swap: %X\n",x);
	return 0;
}

