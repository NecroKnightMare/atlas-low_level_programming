#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
 *
 *
**/

	char buffer [1024];

	if (file_to)
{
		O_TRUNC
}
	if (!file_from || !read(file_from))
{
		dprintf("Error: Can't read from the file NAME_OF_THE_FILE\n");
		exit(98);
}
	if (!creat(file_to) || write(file_to))
{
		dprintf("Error: Can't read from the file NAME_OF_THE_FILE\n");
		exit(99);
}
	if (!close(file_to) || !close(file_from))
{
		 dprintf("Error: Can't close fd FD_VALUE\n");
                exit(100);
}
