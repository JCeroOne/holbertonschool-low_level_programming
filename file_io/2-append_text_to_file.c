#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - Adds text to the end of a file
 * @filename: The name of the file
 * @text_content: The text to add to the file
 *
 * Return: 1 if succesful, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	size_t content_len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	while (text_content[content_len])
		content_len++;

	if (write(file, text_content, content_len) == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
