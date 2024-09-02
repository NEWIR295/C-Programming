/*
 * main.c
 *
 *  Created on: Jul 26, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*function prototype*/
int maxXorValue(int,int);
int main (int argc, char **argv){
	printf("max value = %d",maxXorValue(10,15));
	return 0;
}
int maxXorValue(int l, int r){
	int i,j;
	int max = 0;
	int xor;
	for(i = l;i<=r;i++){
		for(j = i;j<r;j++){
			xor = i ^ j;
			if(xor > max){
				max = xor;
			}
		}
	}
	return max;
}
