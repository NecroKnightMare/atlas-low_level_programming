#include "main.h"

/**
 * print_alphabet - prints string
 * @: no parameters 
 *
 * Description: print alpha in lower case
 * Return: Always success (0)
**/

void print_alphabet(void)
{
    int i = 'a';

    while (i <= 'z')
{
        _putchar(i);
        i++;
}
    _putchar('\n');
    return(0);
}
