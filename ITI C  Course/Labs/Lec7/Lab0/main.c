/*
Code Description:
                 Write C code where you will Implement a function that takes arr[] = {1,2,3,4,5,6,7,8,9,10}
                 then using pointer it will print  only even numbers
                 Hint: use ptr++ to increment 
*/

#include <stdio.h> // input/output std library

void printEvenNumbers(int *ptr, int size);
void ReversEprintEvenNumbers(int *ptr, int size);
int main(void){

    int  arr[]= {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    printEvenNumbers(arr, size);
    ReversEprintEvenNumbers(arr+9, size);
    return 0;
}

void printEvenNumbers(int *ptr, int size){
	int i;
	for(i = 0; i < size; i++, ptr++){
		if( *ptr % 2 == 0){
			printf("%d\n", *ptr);
		}
        }
}


void ReversEprintEvenNumbers(int *ptr, int size){
	int i;

	for(i = 0 ; i < 10 ; i++, ptr--){
		if( *ptr % 2 == 0){
			printf("%d\n", *ptr);
		}
        }
}

