#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *read_textfile - read file, print contents, close file
 *@filename: filepointer
 *@letters: contents of file
 *Return: contents of file
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int rd, wrt;
	char *count;

	if (letters == 0 || filename == NULL)
{
		return (0);
}
	count = malloc(sizeof(char) * letters);

	if (count == NULL)
{
		return (0);
}
	file = open("filename", O_RDONLY);

	if (file == -1)
{
		free(count);
		return (0);
}		
	rd = read(file, count, letters);

	if (rd == -1)
{
		free(count);
		close(file);
		return (0);
}
	wrt = write(STDOUT_FILENO, count, rd);

	free(count);
	close(file);

	if (wrt != rd)
{
		return (0);
}
	return (rd);
}
