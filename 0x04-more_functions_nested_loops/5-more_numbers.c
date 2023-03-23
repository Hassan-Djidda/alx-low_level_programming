#include "main.h"

/**
 * more_numbers - Prints 10 times the number, from 1 to 14
 * 		followed by a new line
 * Retrun: void
 */
void more_numbers(void)
{
	char ch = '0';
	int i;

	i = 1;
	while (i < =10)
	{
		while (ch <= '14')
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
