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

	for (n = 0; n <= 9; n++)
{
		putchar(n);
}
	for (n = 'a'; n <= 'f'; n++)
{
		putchar(n);
}
	putchar('\n');
	return (0);
}
