#include "main.h"

/**
 * more_numbers - Prints 10 times the number, from 1 to 14
 * 		followed by a new line
 * Retrun: void
 */
void main(void)
{
	int num, times, count;

	for (times = 1; times <= 10; ++times)
	{
		for (count = 0; count <= 14; ++count)
		{
			num = count;
			if (count > 9)
			{
				putchar(1 + 48);
				num = count % 10;
			}
			putchar(num + 48);
		}
		putchar('\n');
	}
}
