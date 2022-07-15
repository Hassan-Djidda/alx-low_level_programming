#include <stdio.h>

/**
 * main -> main funcion
 * Return: 0 success
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/**
	 * write your line of cde her..
	 * Remember:
	 */
	p[5] = 98;
	/* ...so that this print 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
