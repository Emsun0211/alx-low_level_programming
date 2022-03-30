
olamic
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
alx-low_level_programming/0x07-pointers_arrays_strings/8-print_diagsums.c
@olamic
olamic pointer code
 1 contributor
32 lines (25 sloc)  523 Bytes
#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: 2d array of chars
 *@size: number matrix
*Return: void
 */

void print_diagsums(int *a, int size)
{
	/*Declaring variables*/
	int i;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	i = 0;
	while (i < size) /*number repetitions*/
	{
		/*sums for diagsums*/
		sum1 = sum1 + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size + size - i - 1);

		i++; /*add +1*/
	}

	printf("%i, %i\n", sum1, sum2);

}
