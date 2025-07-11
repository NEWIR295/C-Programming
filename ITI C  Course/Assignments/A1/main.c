/*
Author: Mohamed Newir
Date: 11/07/2025
File: main.c
Description:
            -> This file contains the main function for the Calculator application.
*/

#include <stdio.h>
#include "calc.h"

int main(void){

    while(1){
        int choice;
        printf("Calculator Menu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");
        
        if (choice == 5) {
            break; // Exit the loop if the user chooses to exit
        }

        double num1, num2, result;
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (choice) {
            case 1:
                result = operation(add, num1, num2);
                printf("Result: %.2lf\n", result);
                break;

            case 2:
                result = operation(subtract, num1, num2);
                printf("Result: %.2lf\n", result);
                break;

            case 3:
                result = operation(multiply, num1, num2);
                printf("Result: %.2lf\n", result);
                break;

            case 4:
                if (num2 != 0) {
                    result = operation(divide, num1, num2);
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
        printf("\n");
    }
    return 0;
}