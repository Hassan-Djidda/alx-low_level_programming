#include <stdio.h>
/**
 * main - prints alphabet in lowercase, followed by a new line
 * print all letters except e q
 * Return; Always 0 (success)
 */
int main(void)
{
	char ch = 'a';
	
	while (ch <= 'z')
	{
		if (ch != 'q' &&  ch != 'e')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
