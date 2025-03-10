/*
 * main.c
 *
 *  Created on: Jul 26, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*constant definitions*/
#define MUSK16 0x8000
#define BITS16 16
/*function prototype*/
int maxNoF1s(unsigned int);
int main(int argc, char **argv){
	unsigned int num = 0b0011110011101011;
	int max = maxNoF1s(num);
	printf("the maximum number of consecutive 1’s = %d",max);
	return 0;
}
/*
a C function to count the maximum number of consecutive 1’s in an unsigned 16 bits integer
*/
int maxNoF1s(unsigned int num){
	int max1s = 0;
	int consecutive = 0;
	int i;
	for(i = 0;i<16;i++){
		if((num<<i)& MUSK16){
			consecutive++;
			if(max1s<=consecutive){
				max1s = consecutive;
			}
		}
		else{
			consecutive = 0;
		}
	}
	return max1s;
}
