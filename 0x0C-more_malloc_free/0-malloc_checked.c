#include<main.h>

/**
 * *malloc_checked - allocate memory and exit if fail
 * @b: int
 * Return: pointer to the array initualized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
