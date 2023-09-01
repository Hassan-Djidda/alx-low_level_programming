#include "main.h"

/**
 * main - prints all arguments followed by new linw
 * @argc: number of arguments
 * @argv: arryays of string arguments
 *
 * Return: 0 succcess
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}



