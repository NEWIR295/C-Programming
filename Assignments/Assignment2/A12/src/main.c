/*
 * main.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Mohamed Newir
 */
/*std libraries*/
#include <stdio.h>
#include <stdlib.h>
/*function prototype*/
int heaterActivationTime(int);

int main(int argc, char **argv){
	int temperature, time;
	printf("enter temperature to activate heater: ");
	fflush(stdout);
	scanf("%d",&temperature);
	time = heaterActivationTime(temperature);
	if(time >= 0){
		printf("the heater activation time required = %d",time);
	}
	else{
		printf("temperature entered by user is invalid");
	}
	return 0;
}
/*
  a C function that calculates the required heater activation time
according to the input temperature of water.
- if input temperature is from 0 to 30, then required heating time = 7
mins.
- if input temperature is from 30 to 60, then required heating time = 5
mins.
- if input temperature is from 60 to 90, then required heating time = 3
mins.
- if input temperature is more than 90, then required heating time = 1
mins.
- if temperature is invalid (more than 100), return 0
Example:
Input = 10 → output = 7
Input = 35 → output = 5
 */

int heaterActivationTime(int temperature){
	int time;
	if(temperature >= 0 && temperature <30){
		time = 7;
		return time;
	}
	else if(temperature >= 30 && temperature < 60){
		time = 5;
		return time;
	}
	else if(temperature >= 60 && temperature < 90){
		time = 3;
		return time;
	}
	else if(temperature >= 90 && temperature <=100){
		time = 1;
		return time;
	}
	else if(temperature > 100){
		return 0;
	}
	return -1; /*inn case user enter temperature < 0*/
}
