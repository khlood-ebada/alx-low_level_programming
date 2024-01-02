#include<stdio.h>

/**
 * swap_int -  swaps the values of two integers
 *		using two input parameter
 * 0a: input parameter 1
 * 0b: input parameter 2
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a
	*a = *b;
	*b = temp;
}
