#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 *
 * @separator: pointer to a constant separator
 * @n: start of the arguments
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int idx;
	char *str;

	va_start(ap, n);

	for (idx = 0; idx < n; idx++)
	{

		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
	
		if (separator && idx != n - 1)
			printf("%s", separator);
	}
	
	va_end(ap);
	printf("\n");
}
