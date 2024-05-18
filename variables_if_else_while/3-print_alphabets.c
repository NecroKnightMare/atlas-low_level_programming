#include <stdio.h>
/**
 * main - void
 * @: no parameters
 *
 * Description: both upper and lower alphabet with newline
 * Return: Always success (0)
**/
int main(void)
{
	int i = 'a';

	while (i <= 'z')
{
		putchar(i);
		i++;
}
	i = 'A';
	while (i <= 'Z')
{
		putchar(i);
		i++;
}
	putchar('\n');
	return (0);
}
