#include <stdio.h>
#include <stdlib.h>
/**
 *main - main block to be excuted
 *Description: print all possible combination of two digit
 * Return: Always 0 success
 */
int main(void)
{
	int digit = 0;
	int count;

	while (digit < 10)
	{
		count = 0;
		
		while (count < 10)
		{
			if (count != digit && digit < count)
			{
				putchar('0' + digit);
				putchar('0' + count);
				if (count + digit != 17)
				{
					putchar(',');
					putchar(' ');
				}
		
			}
			count++;
		}
		digit++;
	}
	putchar('\n');

	return (0);
}
