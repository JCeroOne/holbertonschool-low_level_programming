#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * copyBySegments - Copies the contents of a file to another file, by segments.
 * @from: The file descriptor of the source file
 * @to: The file descriptor of the destination file
 * @n: The number of bytes per segment
 *
 * Return: 1 if succesful, -1 otherwise
 */
int copyBySegments(int from, int to, size_t n)
{
        ssize_t bytesRead;
        ssize_t bytesWritten = 0;
        char *buffer = malloc(n * sizeof(char));

        while ((bytesRead = read(from, buffer, n)) > 0)
	{
                bytesWritten = write(to, buffer, bytesRead);

                if(bytesWritten != bytesRead)
                {
                        free(buffer);
                        return (-1);
                }
        }

        free(buffer);
        
	if (bytesRead == -1)
		return (-1);

	return (1);
}

/**
 * main - Copies the contents of a file to another
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: Always 0, unless something breaks
 */
int main(int argc, char *argv[])
{
	int file_from;
	int file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_to == -1)
	{
		close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if(copyBySegments(file_from, file_to, 1024) == -1)
	{
		close(file_from);
		close(file_to);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if(close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
