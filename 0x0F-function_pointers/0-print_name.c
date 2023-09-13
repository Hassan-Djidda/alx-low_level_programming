#include "function_pointers.h"

/**
 * print_name - function prints a name
 * @name: name to print
 * @f: a function pointer to print name
 *
 * Retrun: void
 */

void print_name(char *name, void (*f) (char *))
{
	if (*name != NULL && f != NULL)
		f(name);
}
