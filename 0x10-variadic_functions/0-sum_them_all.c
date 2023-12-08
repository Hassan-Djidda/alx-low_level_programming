#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 *
 * @n: start of input variables
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int param, sum = 0;
	va_list ap;

	va_start(ap, n);

	for (param = 0; param < n; param++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
