#include<stdio.h>

/**
 * swap_int -  swaps the values of two integers
 *		using two input parameter
 * Description a - input parameter 1
 * Description b - input parameter 2
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
