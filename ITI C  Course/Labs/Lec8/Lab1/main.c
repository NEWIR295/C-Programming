/*
Code Description:
                 Write a c code that defines a structure for employees that contains his salary,
		 bonus and deductions. The program shall ask the user to enter these information
		 for three employees ( Ahmed, Waleed and Amr). Then the program will print the
    		 total value shall be supplied by finance team.
*/

#include <stdio.h> // input/output std library

typedef struct{
	char *name;
	int salary;
	int bonus;
	int deduction;
}Employee;



void main (void){
	Employee Ahmed;
	Employee Waleed;
	Employee Amr;
	Ahmed.name = "Ahmed";
	Waleed.name = "Waleed";
	Amr.name = "Amr";
	int total = 0;
	Employee array[] = {Ahmed, Waleed, Amr};
	
	for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
		printf("Enter %s data:\n", array[i].name);
		printf("Enter %s Salary: ", array[i].name);
		scanf("%d", &array[i].salary);
		printf("Enter %s Bonus: ", array[i].name);
		scanf("%d", &array[i].bonus);
		printf("Enter %s Deduction: ", array[i].name);
		scanf("%d", &array[i].deduction);
		
		total = total + array[i].bonus + array[i].salary - array[i].deduction;
	}
	
	printf("\nEmployee data:\n");
	
	for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
		printf("%s data\n:", array[i].name);
		printf("Enter %s Salary is %d\n", array[i].name, array[i].salary);
		printf("Enter %s Bonus is %d\n", array[i].name, array[i].bonus);
		printf("Enter %s Deduction is %d\n", array[i].name, array[i].deduction);
		printf("\n");
	}
	printf("total value shall be supplied by finance team is %d\n", total);	
}

