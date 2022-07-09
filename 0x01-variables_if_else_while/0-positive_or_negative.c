#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main -assigns random to int n everytime 
 * it excutes , amd prints it
 * Return : Always 0 sucess
 **/
int main(void)
{
	int n;

	srand(time(0));
	n=rand()-RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n",n);
	else if (0 == n)
		printf("%d is zero\n",n);
	else if (n < 0)
		printf("%d is negative\n",n);
	return (0);
}


