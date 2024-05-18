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
	char i;

	for(i = 'a'; i <= 'z'; i++)
{
		if(i!= 'e' && i!= 'q')
{
			putchar("%c", i);
}
}
	putchar('\n');
	return (0);
}
