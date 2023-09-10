#include <stdlib.h>

/**
 * malloc_checked - a function to allocate memory
 * @b: bytes amount
 *
 * Return: a pointer if success or exit 98
 */

void *malloc_checked(unsigned int b)
{
	void *alloc_mem;

	alloc_mem = malloc(b);

	if (alloc_mem == NULL)
		exit(98);
	return (alloc_mem);
}
