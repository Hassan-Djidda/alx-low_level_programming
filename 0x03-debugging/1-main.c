#include <stdio.h>

/**
 * main - causing infinite loop
 * Return: Always 0 success
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	
	i = 0;
	
	/**
	 * while (i < 10)
	 * {
	 * 	putchar(i);
	 * }
	 */

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
