#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_file - Creates and writes to a new file
 * @filename: The name of the new file
 * @text_content: The contents of the file
 *
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	size_t content_length = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_TRUNC);

	if (file == -1)
	{
		file = open(filename, O_CREAT | O_RDWR, 0600);

		if (file == -1)
			return (-1);
	}

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	while (text_content[content_length])
		content_length++;

	if (write(file, text_content, content_length) == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
