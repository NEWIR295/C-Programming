/*
 * main.c
 *
 *  Created on: Jul 13, 2024
 *      Author: Mohamed Newir
 *      program that prints number of days in each month
 */

//std libraries
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

	int month;
	printf("enter month number: ");
	fflush(stdout);
	scanf("%d",&month);
	switch(month){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf(" there is 31 days in this month");
		break;
	case 2:
		printf("there is 29 days in this month");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("there is 30 days in this month");
		break;
	default:
		printf("there is only 12 months dude !!!");
	}
	return 0;
}

