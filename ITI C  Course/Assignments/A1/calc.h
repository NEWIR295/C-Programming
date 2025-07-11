/*
Author: Mohamed Newir
Date: 11/07/2025
File: calc.h
Description:
            -> This file contains the function declaration for the calculator operations.
            -> It includes functions for addition, subtraction, multiplication, and division.
            -> It also includes a generic operation function that takes a function pointer for the operation.
*/

#ifndef CALC_H
#define CALC_H
/*
    Easter Egg:
                " ^-^ أحيك انك وصلت لهنا ، لو مفهمتهاش تعالي اسألني فيها "
*/
float operation(float (*op)(float, float), float, float);

float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);


#endif // CALC_H