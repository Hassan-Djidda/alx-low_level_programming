#include "main.h"

/**
 * factorial - return factoriel of a givin number
 *
 * @n: number
 *
 * Return: num
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
