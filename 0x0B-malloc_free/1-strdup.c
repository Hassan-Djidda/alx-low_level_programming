#include <stdlib.h>

/**
 * _strdup - retruns new string duplicate of the string
 *
 * @str: sting to duplicate
 *
 * Return: NULL if str is NULL
 */

char *_strdup(char *str)
{
	int len = 0, i = 0;
	char *dup_array;

	if (str == NULL)
		return (NULL);
	while (str != '\0')
		len++;

	dup_array = malloc(sizeof(char) * (len + 1));

	if (dup_array == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (str != '\0')
			dup_array[i] = str[i];
	}

	return (dup_array);
}
