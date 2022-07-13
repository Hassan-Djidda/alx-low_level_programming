#include <stdio.h>

/**
 * print_rev - reversedd string is printed \n
 * @s: pointer tobe printed for the str
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while(i--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
