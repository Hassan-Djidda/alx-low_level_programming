#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: number of argument
 * @argv: arrays of arguments
 *
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%s\n", argc - 1);
	return (0);
}
