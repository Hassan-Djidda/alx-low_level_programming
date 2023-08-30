#include "main.h"

/**
 * _pow_recursion - Returns the value raised of the power y
 *
 *@x: to rise
 *@y: the power
 *
 * Return: -1 if y lower than 0 otherwise pow_value
 */
int _pow_recursion(int x, int y)
{
	int result = 0;
	
	if (y < 0)
		return (-1);
	else if (y == 0)
		result = 1;
	else
	{
		result =  _pow_recursion(x, y // 2);
		if (y % 2 == 0)
			result *= result;
		else
			result *= result * x;
	}
	return (result);
}

