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
	int num;

	for (num = 0; num <= 15; num++)
{
	putchar("%x", num);
}
	putchar('\n');
	return (0);
}
