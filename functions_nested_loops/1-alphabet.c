#ifndef MAIN_H
#define MAIN_H

void print_alphabet(void);

#endif

/**
 * main - void
 * @: change function
 *
 * Description: print alpha in lower case
 * Return: Always success (0)
**/

#include <stdio.h>
#include "main.h"

void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
{
        _putchar(letter);
	letter++;
}
    _putchar('\n');
}

int main(void)
{
    print_alphabet();
    return 0;
}
