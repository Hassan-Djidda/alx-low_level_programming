#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	int i;
	unsigned int sum = 0;
	va_list ap;
	va_start(ap, n);

	for (i = n; i >= 0; va_arg(ap, int))
		sum += i;
	va_end(ap);
}
