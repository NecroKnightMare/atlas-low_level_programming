#include "main.h"

/**
 * print_chessboard - print a chessboard
 * @a: array
 * Return: 0
**/
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col = 0;

	while (row < 8)
{
		row++;
		while (col < 8)
{
			col++;
			_putchar(a[row][col]);
}
	_putchar ('\n');
}
}
	
