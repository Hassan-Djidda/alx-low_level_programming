#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints multiplication of all argument followed by new linw
 * @argc: number of arguments
 * @argv: arryays of string arguments
 *
 * Return: 0 succcess
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", mul);
	}
	return (0);
}
