/*
 * main.c
 *
 *  Created on: Jul 26, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* function prototype */
int countOccurance(int *a, int size, int target);
int main (int argc, char **argv){
    int target;
    printf("enter target to count: ");
    scanf("%d",&target);
    int array[5]= {1,2,2,3,2};
    printf("target %d occured %d times\n",target,countOccurance(array,SIZE,target));
    return 0;
}
/*function count the occurrence of specific element in array*/
int countOccurance(int *a, int size, int target){
    int count = 0;
    int i;
    for(i =0;i<=size;i++){
        if(a[i] == target){
            count ++;
        }
    }
    return count;
}
