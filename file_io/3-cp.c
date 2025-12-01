#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _open - Creates the file, if it doesn't exist, and opens it.
 * @filename: Name of the file
 * @flags: The flags for the file
 * @perms: The permissions for the file, if it doesn't exist.
 *
 * Return: The file descriptor.
 */
int _open(const char *filename, int flags, mode_t perms)
{
        int file;

        if (filename == NULL)
                return (-1);

        file = open(filename, flags);

        if (file == -1)
        {
                file = open(filename, O_CREAT | flags, perms);

                if (file == -1)
                        return (-1);
        }

        return (file);
}

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

        do
        {
                bytesRead = read(from, buffer, n);

                if(bytesRead == -1)
                {
                        free(buffer);
                        return (-1);
                }

                write(to, buffer, n);

                if(bytesWritten == -1)
                {
                        free(buffer);
                        return (-1);
                }
        }
        while(bytesRead != 0);

        free(buffer);
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

	file_to = _open(argv[2], O_WRONLY | O_TRUNC | O_APPEND, 0664);

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
