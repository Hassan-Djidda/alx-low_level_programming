#include "main.h"

/**
 * _strlen_recursion: to check length
 * @s: string to check
 *
 * Return:length
 */

int _strlen_recursion(char *s)
{
	int length = 0;
	if (s != '\0')
	{
		length++;
		length += strlen_recursion(s + 1);
	}
	return (length);
}

/**
 * check_palin - check if palindrome
 * @s: string to check
 * @first_index: the first index
 * @last_index: the last index of the string
 *
 * Return: 1 if palindrome 0 otherwise
 */

int check_palin(char *s, int first_index, int last_inde)
{
	if (s[first_index] == s[last_index])
	{
		if (first_index > last_index / 2)
			return (1);
		else
			return (check_palin(s, first_index + i, last_index -1));
	}
	else
		return (0);
}

/**
 * is_palindrome - check a string is palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome 0 otherwise
 */

int is_palindrome(char *s)
{
	return (check_palin(s, 0, _strlen_recursion(s) - 1));
}
