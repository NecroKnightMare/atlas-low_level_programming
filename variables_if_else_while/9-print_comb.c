#include <stdio.h>
/**
 * main - void
 * @: no parameters
 *
 * Description: print all possible combos of single digit numbers in ascending order; no char
 * Return: Always success (0)
**/
int main(void)
{
	int i = 0, n = 0;

	while (i <='9')
{
	n = 0;

	while (n <= '9')
{
		putchar('0' + i);
		putchar(',');
		putchar('0' + n);
		n++;
}
	putchar('\n');
	i++;
}
	return (0);
}
