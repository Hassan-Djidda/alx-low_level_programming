#include <stdlib.h>

/**
 * str_concat - concatenates two string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL if empty else ptr
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0, j = 0;
	char *str_con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
	       len2++;

	str_con = malloc((sizeof(char) * i) + ((j + 1) * sizeof(char)));

	if (str_con == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str_con[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		str_con[i] = s2[j];
		i++;
	}
	str_con[j] = '\0';

	return (str_con);
}
