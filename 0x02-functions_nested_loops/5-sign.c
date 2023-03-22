#include <stdio.h>

/**
 * print_sign - entry point
 * @n : number to check
 * Return:0 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(0 + 43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(0 + 48);
		return (0);
	}
	else
	{
		putchar(0 + 45);
		return (-1);
	}
}
