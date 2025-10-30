#include "main.h"

/**
 * _memcpy - Copies n bytes of memory from src to dest
 * @dest: The address to copy the bytes to
 * @src: The address to copy the bytes from
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the dest address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
