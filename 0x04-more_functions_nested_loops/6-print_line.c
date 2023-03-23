#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 *
 * Return: void
 */

void print_line(int n)
{
	char uscore = '_';
	int i = 1;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; ++i)
		{
			_putchar(uscore);
		}
		_putchar('\n');
	}
}
