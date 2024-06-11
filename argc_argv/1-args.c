#include "main.h"
#include <stdio.h>
/**
 * main - print value of file
 * @argc: value
 * @argv: file
 * Return: 0
**/
int main(int argc, char* argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
