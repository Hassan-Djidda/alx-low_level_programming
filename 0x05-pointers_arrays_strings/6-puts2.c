#include <stdio.h>

/**
 * puts2 - prints string
 * @str: pointer 
 * Return: void
 */
void puts2(void *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}

