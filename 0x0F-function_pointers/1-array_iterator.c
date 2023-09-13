#include "function_pointers.h"

/**
 * array_iterator - a  function excutes a function in each element of the array
 * @array: an array to perform the iteration on
 * @size: size of the array
 * @action: is pointer to function you need to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

