#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a string
 *
 * @s: String to check
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
		return (length + _strlen_recursion(s + 1));
	else
		return (0);	
}
