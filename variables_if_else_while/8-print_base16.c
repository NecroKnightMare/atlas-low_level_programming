#include <stdio.h>
/**
 * main - void
 * @: no parameters
 *
 * Description: prints all numbers of base 16 in lowercase followd by newline
 * Return: Always success (0)
**/
int main(void)
{
	int n;

	for (n = 0; n <= 15; n++)
{
	putchar(n + 0);
}
	putchar('\n');
	return (0);
}
