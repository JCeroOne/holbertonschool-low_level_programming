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
	ssize_t printed;
	char *buffer;
	char *current;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
		return (0);

	bytesRead = read(file, buffer, letters);

	if (bytesRead == -1)
	{
		free(buffer);
		return (0);
	}

	current = buffer;

	while (*current != '\0')
	{
		int wr = _putchar(*current);

		if(wr == -1)
		{
			free(buffer);
			return (0);
		}

		printed++;
		current++;
	}

	close(file);
	free(buffer);

	return (printed);
}
