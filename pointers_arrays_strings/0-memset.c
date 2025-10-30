#include "main.h"

/**
 * _memset - Fills in n bytes in memory after s with byte b
 * @s: The starting point of the filling
 * @n: The number of bytes to fill
 * @b: The byte to fill with
 *
 * Return: A pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
