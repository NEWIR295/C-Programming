/*
 * main.c
 *
 *  Created on: Jul 19, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){
	int num,reminder,sum = 0;
	printf("enter number please: ");
	fflush(stdout);
	scanf("%d",&num);
	do{
		reminder = num%10;
		sum +=reminder;
		num /=10;
	}while(num !=0);
	printf("sum = %d\n",sum);
	return 0;
}
