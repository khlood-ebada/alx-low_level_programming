#include "variadic_functions.h"

/**
 * sum_them_all - sum of variables
 * @n: no of arguments
 * @...: intgers
 * Return: the integer sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	while (i--)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
