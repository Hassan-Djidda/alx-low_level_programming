#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main block to be executed
 * Description: print all possible combination of 
 * three digit followed by new line
 * Return: Always 0 success
 */
int main(void)
{
	int firstVar;
	int secondVar;
	int thirdVar = 0;

	while (thirdVar < 10)
	{
		secondVar = 0;

		while (secondVar < 10)
		{
			firstVar = 0;

			while (firstVar < 10)
			{
				if (firstVar != secondVar && secondVar != thirdVar && thirdVar < secondVar && secondVar < firstVar)
				{
					putchar('0' + thirdVar);
					putchar('0' + secondVar);
					putchar('0' + firstVar);
					if ( firstVar + secondVar + thirdVar != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				firsVar++;
			}
			secondVar++;
		}
		third++;
	}
	putchar('\n');

	return (0);
}


