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
void countEvenOdd(int *,int,int *,int *);

int main(int argc, char ** argv){
    int array[SIZE] = {1,2,4,9,7};
    int even =0 ,odd = 0;
    countEvenOdd(array,SIZE,&even,&odd);
    printf("odd = %d, even =%d\n",odd,even);
    return 0;
}
/*function count even/odd numbers in an array*/
void countEvenOdd(int *a,int size,int *eventCount,int * oddCount){
    int i ;
    for(i = 0; i<size;i++){
        if(a[i]%2==0){
            *eventCount = *eventCount +1;
        }
        else{
            *oddCount = *oddCount +1;
        }
    }

}
