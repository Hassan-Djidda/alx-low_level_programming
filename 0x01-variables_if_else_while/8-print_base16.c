#include <stdio.h>
#include <stdlib.h>
/**
 * main- main block to be executed
 * Description: printall number of base 16
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char chr;

	for (chr = '0'; chr <= '9'; chr++)
		putchar(chr);
	for (chr = 'a'; chr <= 'f'; chr++)
		putchar(chr);
	putchar('\n');
	return (0);
}
