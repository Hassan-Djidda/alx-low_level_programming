#include <stdio.h>

/**
 * print_alphabet - entry point
 * Return: 0 succes
 */
void print_alphabet(void)
{
	char j;
	
	for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
}
