#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - gets the operator
 * @s: string operator
 *
 * Return: 0 success
 */

int (*get_op_func(char *s))(int, int)
{
	opt_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "/", op_div },
		{ "*", op_mul },
		{ "%", op_mod },
		{ NULL, NULL },
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (0);
}
