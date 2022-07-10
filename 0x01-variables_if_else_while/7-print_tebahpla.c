#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description - print all the alphabet in reverse  
 * followed by new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char achar;
	
	for (achar = 'z'; achar >= 'a'; achar++)
	{
		putchar(achar);
	}
	putchar('\n');
}


