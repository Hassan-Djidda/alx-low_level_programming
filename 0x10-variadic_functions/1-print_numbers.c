#include <stdarg.h>
#include "variadic_function.s"

/**
 * print_numbers - a function that print numbers, follewed by a new line
 *
 * @separator: pointer to a constant seperator
 * @n: start of the argument
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int idx;

	va_start(ap, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(ap, int));
		if (seperator && index != n-1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
