#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
 *
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rd, wrt;
	char *count;

	if (!filename || filename == NULL)
{
		return (0);
}
	file = fopen(filename, "r");
	
	
