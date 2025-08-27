/*
		Write a simple program that check if a person can drive or not. the program
		should ask the user to enter his age and if his age is greater than or equal to
		16 then print a message that he can drive otherwise print that he can not drive.
*/

#include <stdio.h>

int main(void)
{
	int age;
	printf("enter your age :\n");
	scanf("%d",&age);
	if(age>=16)
	{
		printf("your age is %d so, you can drive",age);
	}
	else
	{
		printf("you can not drive");
	}
	return 0;
}
