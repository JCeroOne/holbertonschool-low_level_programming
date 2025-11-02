#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the program.
 * @argc: The argument count.
 * @argv: The arguments.
 *
 * Return: Always 0
 */
int main(
		int argc __attribute__((unused)),
		char *argv[] __attribute__((unused))
	)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
