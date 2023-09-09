#include <stdlib.h>

/**
 * create_array - creates an array of chars initiliazed with specific char
 *
 * @size: the size of the char array
 * @c: the specific char
 *
 * Return: Null if size 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(c) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
