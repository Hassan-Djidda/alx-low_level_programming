#include <stdio.h>

/**
 * print_sign - entry point
 * @n : number to check
 * Return:0 or 1
 */
int print_sign(int n)
{
	int numz;

	if (n > 0)
	{
		numz = 1;
		putchar('+');
	}
	else if (n == 0)
	{
		numz = 0;
		putchar('0');
	}
	else
	{
		numz = -1;
		putchar('-');
	}
	return (numz);
}
