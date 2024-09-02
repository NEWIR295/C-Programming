/*
 * main.c
 *
 *  Created on: Jul 11, 2024
 *      Author: Mohamed Newir
 *      a program to reverse a number.
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){
	int num,reverse = 0, reminder;
	printf("enter number to reverse: ");
	fflush(stdout);
	scanf("%d",&num);
	while(num != 0){

		reminder = num%10; /*get the right number*/
		reverse = reverse*10+ reminder;/* put the right number from above op to be in reverse pos*/
		num /=10; /*divide by 10 to get the next digit*/
	}
	printf("the reverse = %d",reverse);
	return 0;
}
