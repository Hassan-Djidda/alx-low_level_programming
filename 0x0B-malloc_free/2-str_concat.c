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
	while (*s1 != '\0')
		len1++;
	while (*s2 != '\0')
	       len2++;

	str_con = malloc(sizeof(char) * (i + j + 1));

	for (i = 0; i < len1; i++)
		str_con[i] = s1[i];
	for (j = 0; j < len2; j++)
		str_con[i] = s2[j];
	str_con[j] = '\0';

	return (str_con);
}
