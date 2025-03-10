/*
 * main.c
 *
 *  Created on: Jul 19, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*function prototype*/
int countHoles(int);
int main(int argc, char **argv){
	int num;
	printf("enter holes digits to get its sum: ");
	fflush(stdout);
	scanf("%d",&num);
	printf("holes sum = %d",countHoles(num));
	return 0;
}
/*
You are designing a poster which prints out numbers with a unique
style applied to each of them. The styling is based on the number of
closed paths or holes present in a giver number. The number of holes
that each of the digits from 0 to 9 have are equal to the number of closed
paths in the digit. Their values are:
• 1, 2, 3, 5 and 7 = 0 holes.
• 0, 4, 6, and 9 = 1 hole.
• 8 = 2 holes.
Given a number, you must determine the sum of the number of holes for
all of its digits. For example, the number 819 has 3 holes.
Function Description
Complete the function countHoles. The function must return an integer
denoting the total number of holes in num.
*/
int countHoles(int num){
	int sum =0;
	int twoHoles = 8;
	int digit, i;
	int oneHole[4] = {0,4,6,9};
	int zeroHoles[5]= {1,2,3,5,7};
	do{
		digit = num%10;
		/*check for zero holes*/
		/*waste of time to check in my opinion, we may not implement it*/
		for(i=0;i<5;i++){
			if(digit == zeroHoles[i]){
				sum +=0;
			}
		}
		/*check for one hole*/
		for(i = 0;i<4;i++){
			if(digit == oneHole[i]){
				sum += 1;
			}
		}
		/*check for two holes*/
		if(digit == twoHoles){
			sum +=2;
		}
		num /=10;
		/*fe corner case lw d5lt for ex 086 3omro my2ra en feeh 0 w yhsbha b 1*/
	}while(num !=0);
	return sum;
}
