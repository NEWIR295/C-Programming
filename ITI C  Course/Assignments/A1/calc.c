/*
Author: Mohamed Newir
Date: 11/07/2025
File: calc.c
Description:
            -> This file contains the function implementations for the calculator operations.
            -> It includes functions for addition, subtraction, multiplication, and division.
            -> It also includes a generic operation function that takes a function pointer for the operation.
*/

#include <stdio.h>
#include "calc.h"

/*
    Function: operation
    Description: This function takes a function pointer and two float numbers,
                performs the operation defined by the function pointer on the two numbers,
                and returns the result.
    Parameters:
        op: A pointer to a function that takes two float arguments and returns a float.
        a: The first float number.
        b: The second float number.
    Returns: The result of the operation as a float.
*/
float operation(float (*op)(float, float), float a, float b){
    return (*op)(a, b);
}


float add(float a, float b){
    return a + b;
}

float subtract(float a, float b){
    return a - b;
}

float multiply(float a, float b){
    return a * b;
}

float divide(float a, float b){
    return a / b;
}
