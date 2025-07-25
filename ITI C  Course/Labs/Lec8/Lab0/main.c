/*
 * main.c
 *
 *  Created on: Jul 30, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*constant definitions*/
#define SIZE 6
#define FREQ_SIZE 256
/*function prototype*/
void charFreqInStr(const char*,int*);
/*main function*/
int main(int argc,char **argv){
	int i;
	char str[20];
	int freq[FREQ_SIZE] = {0};
	/*int size = 0;*//*= sizeof(str)/sizeof(str[0]);*/
	printf("enter string: ");
	fflush(stdout);
	scanf("%s",str);
	/*for(i = 0;str[i] != '\0';i++){
		size++;
	}
	int arr[size] ;//= {0};*/

	charFreqInStr(str,freq);
	printf("frequency of each char appeared in %s:\n",str);
	for(i = 0;i<FREQ_SIZE;i++){
		if(freq[i] != 0){
			printf("%c : %d\n",i,freq[i]);
		}
	}
	return 0;
}
/*
a C function to find the frequency of characters in a string.
• Input the string from the user.
• Traverse the string, character by character and store the
count of each of the characters in an array.
• Print the array that contains the frequency of all the characters.
 */
void charFreqInStr(const char *str,int *arr){
	int i;
	for(i = 0;str[i] != '\0';i++){
		arr[(unsigned char)str[i]]++;
	}
	/*
	int length = 0;
	for(i = 0;str[i] != '\0';i++){
		length++;
	}
	 */
	/*
	 * shitty solution
	for(i=0;str[i] != '\0';i++){
		arr[i]= 0;
		for(j=0;str[j] != '\0';j++){
			if(str[i] == str[j]){
				arr[i] +=1 ;
			}
		}
	}
	*/
}`
