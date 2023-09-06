#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * check_digit - to verify a number is digit
 * @num_array: string to verify
 *
 * Return: 1 if number 0 otherwise
 */

int check_digit(char num_array[])
{
	int i, len = strlen(num_array);

	for (i = 0; i < len - 1; i++)
	{
		if (isdigit(num_array[i]) != 1)
			return (0);
	}
	return (1);
}
/**
 * main - prints the sum of arguments followed by new linw
 * @argc: number of arguments
 * @argv: arryays of string arguments
 *
 * Return: 0 succcess
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (check_digit(argv[i]) == 1)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	printf("%d\n", sum);
	}

	return (0);
}
