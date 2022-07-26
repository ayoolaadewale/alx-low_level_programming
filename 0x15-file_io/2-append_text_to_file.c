#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *append_text_to_file - entry point
 *@filename: arg one
 *@text_content: arg two
 *Return: one or zero
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res_write, length;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		length = 0;
		while (*(text_content + length) != '\0')
			length++;
		res_write = write(fd, text_content, length);
		if (res_write == -1)
		{
			close(fd);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
