#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: The argument count.
 * @argv: The arguments.
 *
 * Return: Always 0, unless something is off.
 */
int main(
		int argc __attribute__((unused)),
		char *argv[] __attribute__((unused))
	)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
