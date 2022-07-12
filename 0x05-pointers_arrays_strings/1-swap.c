#include <stdio.h>

/**
 * swap_int -swap variable value
 * @a: first pointer
 * @b:second pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a += b;
	*b = *b - *a;
	*a = *a - *b;
}
