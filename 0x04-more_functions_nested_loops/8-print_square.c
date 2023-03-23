#include "main.h"

/**
 * print_square - Prints a squared followed by a new line
 *
 * @size: The size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int line, column;

	for (line = 1; line <= size; ++line)
	{
		for (column = 1; column <= size; ++column)
			_putchar('#');
		_putchar('\n');
	}
}
