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
	ssize_t printed;
	int file;
	char *buffer;

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
	
	printed = writeToStdout(buffer, (size_t) bytesRead);
	if (printed == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}

	close(file);
	free(buffer);
	return (printed);
}

/**
 * writeToStdout - A function to write to stdout because of Betty's limits
 * @buffer: The buffer
 * @bytesRead: The number of bytes read
 *
 * Return: The number of characters printed
 */
ssize_t writeToStdout(char *buffer, size_t bytesRead)
{
	size_t i;
	ssize_t printed = 0;
	char *current = buffer;

	for (i = 0; i < (size_t) bytesRead; i++)
	{
		if(write(STDOUT_FILENO, current, sizeof(char)) == -1)
			return (-1);

		printed++;
		current++;
	}
	return (printed);
}
