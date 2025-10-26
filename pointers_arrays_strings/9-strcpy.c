#include "main.h"

/**
 * _strcpy - Copies a string to another address.
 * @dest: The destination address
 * @src: The string to copy
 *
 * Return: The pointer to the destination.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
