#include<stdio.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
