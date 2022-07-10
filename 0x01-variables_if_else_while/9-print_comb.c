#include <stdio.h>
#include <stdlib.h>
/**
 * main - executed block
 * Description: prints all possible combination of single digit number
 * Return: Always 0 Success
 */
int main(void)
{
	char chr;

	for (chr = '0'; chr <= '9'; chr++)
	{
		if (chr != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	return 0;
}
