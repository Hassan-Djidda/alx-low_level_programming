#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 0 except 2, 4.
 * 
 * Description: prints number
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		if (ch == '2' || ch == '4')
			continue;
		else
			_putchar(ch);
	}
	_putchar('\n');
}
