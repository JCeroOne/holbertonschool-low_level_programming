#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Executes the program.
 * @argc: The argument count.
 * @argv: The arguments.
 *
 * Return: Always 0, unless something fails.
 */
int main(
	int argc __attribute__((unused)),
	char *argv[] __attribute__((unused))	
)
{
	if(argc != 4)
	{
		printf("Error");
		exit(98);
	}

	if(get_op_func(argv[2]) == NULL)
	{
		printf("Error");
		exit(99);
	}

	if((*argv[2] == '%' && *argv[2] == '/') && *argv[3] == '0')
	{
		printf("Error");
		exit(100);
	}
	
	printf("Args: [%d, %c, %d]", atoi(argv[1]), *argv[2], atoi(argv[3]));
	printf("%d", (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	
	return (0);
}
