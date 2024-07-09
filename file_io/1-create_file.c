#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *create_file - create file
 *@filename: file name
 *@text_content: text in file
 *Return: 1 if success; -1 on failure
**/
int create_file(const char *filename, char *text_content)
{
	int file;
	int length = 0;
	int count = 0;

	if (filename == NULL)
{
		return (-1);
}
	if (filename || text_content == NULL)
{
		file = open(filename, O_CREAT |  O_WRONLY | O_TRUNC, 0600);
}
	if (text_content != NULL)
{
		text_content++;
		count++;
		length = write(file, text_content, count);
}
	if (close(file) == -1 || count != length)
{
		return (-1);
}
	return (1);
}
