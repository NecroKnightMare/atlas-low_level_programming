#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *append_text_to_file - append file
 *@filename: filename
 *@text_content: text in file
 *Return: 1 if success, -1 if failure
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	char *count = 0;
	int length = 0;
	int total = 0;

	if (filename)
{
		file = open("filename", O_WRONLY | O_APPEND);
		return (1);
}
	if (!filename)
{
		return (-1);
}
	if (filename == NULL)
{
		return (-1);
}
	if (text_content == NULL)
{
		return (1);
}
	file = open("filename", O_WRONLY | O_APPEND);
	
	if (file == -1)
{
		return (-1);
}
	while (text_content != NULL)
{
		total++;
		count++;

		length = write(file, text_content, total);
}
	if (total != length || close(file) == -1)
{
		return (-1);
}
	return (1);
}
