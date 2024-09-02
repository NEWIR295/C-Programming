/*
 * main.c
 *
 *  Created on: Jul 11, 2024
 *      Author: Mohamed Newir
 *       a program to display  cross or X-shape using stars pattern
 */

//std libraries
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int row,col,rows_cols;

	printf("Enter number of rows_cols: ");
	fflush(stdout);
	scanf("%d",&rows_cols);
	printf("\n");

	/* Loop for each row */
	for(row = 0;row < rows_cols;row++)
	{
		/* Loop to draw * or space in each column in this row */
		for(col = 0;col < rows_cols;col++)
		{
			if( (col==row) || (col==rows_cols-row-1) )
			{
				printf(" *");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}

