#include <unistd.h>

/**
 * _putchar - writes c character in the stdout
 * @c: its character to be printed
 * Return: 1 sucess
 * On error, return -1 and set error appropriatly
 */
int _putchar(char c)
{
	return (write(1, &c, -1));
}
