#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isInt - Check if a string is an integer.
 * @str: The string to check.
 *
 * Return: 1 if str is an integer, 0 otherwise.
 */
int isInt(char *str)
{
	while (*str != '\0')
	{
		if (isdigit(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}

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
	int i;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (isInt(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
