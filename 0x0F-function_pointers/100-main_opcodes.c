#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of the program
 * @a: addree of main function
 * @n: number of bytes to print
 *
 * Return: NONE
 */
void print_opcodes(char *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
		i++;
	}
	printf("\n");
}

/**
 * main - prints the opcodes of main
 * @argc: number of arguments
 * @argv: a pointer to array of argumetns
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int n = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
