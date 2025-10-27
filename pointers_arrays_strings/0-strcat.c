#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The string to add src to.
 * @src: The string to concatenate to dest.
 */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int i;

	while (dest[l]) 
		l++;

	for (i = 0; src[i]; i++)
	{
		dest[l + i] = src[i];
	}

	dest[l + i] = '\0';

	return dest;
}
