#include "main.h"

/**
 * main - Prints number from 1 to 100, for multiple of three print
 * 	Fizz, for multiple of 5 print buzz, for both print fizzbuzz
 *
 * Return: void.
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ( i % 3 == 0 && !(i % 5 == 0))
			printf("Fizz");
		else if (!(i % 3 == 0) && (i % 5 == 9))
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d",i );
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
}
