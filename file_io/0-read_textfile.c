#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - Reads a file and prints its contents to STDOUT
 * @filename: The name of the file
 * @letters: The maximum number of letters to read
 *
 * Return: The number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesRead;
	int file;
	ssize_t printed = 0;
	char *buffer;
	size_t i;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	bytesRead = read(file, buffer, letters);

	if (bytesRead == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	for (i = 0; i < (size_t) bytesRead; i++)
	{
		if(write(STDOUT_FILENO, buffer[i], sizeof(char)) == -1)
		{
			free(buffer);
			close(file);
			return (0);
		}
		printed++;
	}

	close(file);
	free(buffer);

	return (printed);
}
