#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 *
 * Return: void
 */
void print_diagonal(int size)
{
	int position, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (potision = 1; position <= n; ++position)
		{
			for (space = 1; space <= position; ++space)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
