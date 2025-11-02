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
		int __attribute__((unused)) argc, 
		char __attribute__((unused)) *argv[]
	)
{
	printf("%s\n", argv[0]);
	return (0);
}
