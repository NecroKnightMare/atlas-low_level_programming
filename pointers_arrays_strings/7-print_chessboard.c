#include "main.h"

/**
 * print_chessboard - print a chessboard
 * @a: array
 * Return: 0
**/
void print_chessboard(char (*a)[8])
{
	int row = 1;
	int col = 1;

	while (row <= 8)
{
		row++;
		while (col <= 8)
{
			col++;
			_putchar(a[row][col]);
}
	_putchar ('\n');
}
}
	
