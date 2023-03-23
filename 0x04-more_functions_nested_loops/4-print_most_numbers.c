#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 0 except 2, 4.
 * 
 * Return: void
 */

void print_most_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		if (!(num == '2' || num == '4')
			_putchar(num);
			num++;
	}
	_putchar('\n');
}
