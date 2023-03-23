#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9.
 *
 * Return: void
 */

void print_numbers(void)
{
	char ch =  '0';

	while (ch <= '9')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
