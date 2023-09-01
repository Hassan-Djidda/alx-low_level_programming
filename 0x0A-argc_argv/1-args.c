#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments
 * @argc: number of argument
 * @argv: arrays of arguments
 *
 * Return: always (0)
 */
int main(int argc, char __attribute__((unused))  *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

