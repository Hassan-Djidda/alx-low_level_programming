#include "main.h"
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
	int i = 0;
	int sum;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 0; i < argc; i++)
			mul *= atoi(argv[i]);
	}
	printf("%d", mul);
		
	return (0);
}
