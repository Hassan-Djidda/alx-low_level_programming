#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the sign of a number
 *
 * Return: 1 if +, 0 if 0, -1 if -
 */

int main(int n)
{
	if (n > 0)
	{
		putchar(0 + 43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(0 + 48);
		return(0);
	}
	else
	{
		putchar(0 + 45);
		return (-1);
	}
}
