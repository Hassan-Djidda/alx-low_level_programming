#include "main.h"

/** check_prime - check the prime number
 * @div: is the divisor
 * @num: number to check
 * Return: 1 or 0
 */

int prime_check(int div, int num)
{
	if (num < 2 || num % div == 0)
		return (0);
	else if (div > num / 2)
		return (1);
	else
		return (prime_check(div + 1, num));
}

/**
 * is_prime_number - Returns 1 if n is prime number otherwise 0
 *
 * @n: input integer number
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1)
	return (prime_check(2, n));
}	
