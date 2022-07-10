#include <stdio.h>
#include <stdlib.h>
/**
 * main - executed block
 * Description: prints all possible combination of single digit number
 * Return: Always 0 Success
 */
int main(void)
{
	int chr;

	for (chr = 0; chr < 10; chr++)
	{
		putchar(48 + chr);
		if (chr != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
