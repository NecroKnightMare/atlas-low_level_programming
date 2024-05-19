#include <stdio.h>
/**
 * main - void
 * @: no parameters
 *
 * Description: print single digits followed by new line; cant use char; use putchar twice
 * Return: Always success (0)
**/
int main(void)
{
	int i = 0;
	
	while (i <= 9);
{
	putchar(i);
	i++;
}
	putchar('\n');
	return (0);
}
