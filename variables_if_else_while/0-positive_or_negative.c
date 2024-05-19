#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - void
 * @: no parameters
 *
 * Return: Always Success (0)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
{
		putchar(n);
		printf("is positive\n");
}
		if (n < 0)
{
		putchar(n);
		printf("is negative\n");
}
		else (n == 0);
{
		putchar(n);
		printf("is zero\n");
}
	return (0);
}
