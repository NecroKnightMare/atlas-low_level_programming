#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print pos neg or zero to random number
 * @: no parameter
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
		printf("%d is positive", n);
}
	else if (n < 0)
{
		printf("%d is negative", n);
}
	else
{
		printf("%d is zero", n);
}
	putchar('\n');
	return (0);
}
