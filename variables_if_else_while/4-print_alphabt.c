#include <stdio.h>
/**
 * main - void
 * @: no parameters
 *
 * Description: ignore q and e
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
	putchar('\n');
	return (0);
}
| grep -i [eq]
