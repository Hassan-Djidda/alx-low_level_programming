#include <stdio.h>

/**
 * print_sign - entry point
 * @n : number to check
 * Return:0 or 1
 */
int print_sign(int n)
{
	char ch = '0';
	
	if (n > 0)
	{
		putchar(ch - 5);
		return (1);
	}
	else if (n == 0)
	{
		putchar(ch);
		return (0);
	}
	else
	{
		putchar(ch - 3);
		return (-1);
	}
}
