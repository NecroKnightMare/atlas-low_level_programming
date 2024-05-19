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
	int i;

	while (i = 15; i >= 0; i--)
{
	putchar('0' + i);
}
	putchar('\n');
	return (0);
}
