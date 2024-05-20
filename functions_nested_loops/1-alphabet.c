#include "main.h"

/**
 * _putchar - prints string
 * @c: char
 *
 * Description: print alpha in lower case
 * Return: Always success (0)
**/

void print_alphabet(void)
{
    char c = 'a';

    while (c <= 'z')
{
        _putchar(c);
        c++;
}
    _putchar('\n');
    return (0)
}
