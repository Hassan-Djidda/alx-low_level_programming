#include <stdio.h>

/**
 * times_table - prints tables
 * Return: void
 */
void print_times_table(void)
{
	int a = 0;
	int b;
	int rep;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			rep = a * b;
			if (b == 0)
			{
				putchar('0' + rep);
			}
			else if (rep < 10)
			{
				putchar(' ');
				putchar('0' + rep);
			}
			else
			{
				putchar('0' + rep / 10);
				putchar('0' + rep % 10);
			}
			if (b < 9)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		putchar('\n');
		a++;
	}
}
