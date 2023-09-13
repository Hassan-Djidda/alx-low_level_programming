#include "3-clac.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integer
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts an integer
 * @a: ...
 * @b: ...
 *
 * Return: the substraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two integer
 * @a: ...
 * @b: ...
 *
 * Return: the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: ...
 * @b: ...
 *
 * Return: the division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo function
 * @a: ...
 * @b: ...
 *
 * Return: the modulo operatiion
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
