/**
 * _strlen - finds the length of of the string
 * @s: pointer for the the string to be checked
 * Return: void
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
