/**
 * _isdigit - check for a digit
 *
 * @c: Character to check
 *
 * Return: 1 if a digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
