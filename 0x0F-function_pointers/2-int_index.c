#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @size: number of element in the array
 * @cmp: a function pointer used to compare values
 * @array: an array of element
 *
 * Return: the index if cmp is != 0 else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while(i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
	

