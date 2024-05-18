#include <stdio.h>
#include <ctype.h>
/**
 * main - void
 * @: no parameters
 *
 * Description: print the alphabet a-z in lowercase followed by a newline
 * Return: Always success (0)
*/
int main(void)
{
	int i = 'a';

	while (i <= 'z'){
	putchar(i);
	i++;}
	
	putchar('\n');

	return (0);
}
