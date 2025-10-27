#include "main.h"

/**
 * _strncat - Concatenates n characters of src to dest.
 * @dest: The string to concatenate src to.
 * @src: The string to concatenate to dest.
 * @n: The maximum number of characters to concatenate.
 *
 * Return: A pointer to the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i;

	while (dest[l])
		l++;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[l + i] = src[i];
	}

	if (i < n)
		dest[l + i] = '\0';

	return (dest);
}
