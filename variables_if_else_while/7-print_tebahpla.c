#include <stdio.h>
/**
 * main - void
 * @: no parameters
 *
 * Description: prints alpha in lowercase and reverse
 * Return: Always success (0)
**/
int main(void)
{
	int i = 'z';

	while (i >= 'a')
{
	putchar(i);
	i--;
}
	putchar('\n');
	return (0);
}
