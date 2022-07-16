#include <stdio.h>

/**
 * print_alphabet - entry point
 * Return: 0 succes
 */
int print_alphabet(void)
{
	char j;
	
	for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
}
