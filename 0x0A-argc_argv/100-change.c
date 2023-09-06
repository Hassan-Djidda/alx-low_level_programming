#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum numbr of coins to make change of money
 *
 * @argc: number of arguments
 * @argv: array of parameters
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int cents, coin_numbers = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			coin_numbers += 1;
		}
	}
	printf("%d\n", coin_numbers);
	return (0);
}
