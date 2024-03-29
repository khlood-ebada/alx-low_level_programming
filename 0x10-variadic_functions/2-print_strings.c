#include <variadic_functions.h>

/**
 * print_strings - print strings
 * @separator: string separator
 * @n:no of arguments
 * @...: string to print
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (n == 0)
	{
		printf("nil");
		return;
	}

	va_start(ap, n);

	while (i--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end
}
