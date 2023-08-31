#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: to find its square root
 *
 * Return: sqrt if exit else -1
 */

int sqrt_check(int root, int number);

int _sqrt_recursion(int n)
{
	int root;

	if (root < 0)
		return (-1);
	else
		return(sqrt_check(root + 1`, number); 
}

int sqrt_check(int root, int number)
{	

		if ((root * root) > number)
			return (-1);
		if ((root * root) == number)
			return root;
}
