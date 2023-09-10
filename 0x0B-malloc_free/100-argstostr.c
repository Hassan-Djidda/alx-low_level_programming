#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 *
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: NULL if fails else a pointer to string
 */

char *argstostr(int ac, char **av)
{
	char *str_con, *str;
	int i, j, k, len = 0;

	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		str = av[i];
		j = 0;

		while (str[j++])
			len++;
		len++;
	}

	str_con = (char *)malloc(sizeof(char) * (len + 1));

	if (str_con == NULL)
		return (NULL);
	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		str = av[i];
		k = 0;

		while (str[k])
		{
			str_con[j] = str[k];
			k++;
			j++;
		}
		str_con[j++] = '\n';
	}
	str_con[j] = '\0';

	return (str_con);
}
