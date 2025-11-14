#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Prints a name to the console.
 * @name: The name to print.
 * @f: The format function.
 */
void print_name(char *name, void (*f)(char *))
{
	*f(name);
}
