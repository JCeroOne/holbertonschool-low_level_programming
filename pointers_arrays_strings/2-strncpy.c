#include "main.h"

/**
 * _strncpy - Copies n characters of src to dest
 * @dest: The string to copy src into.
 * @src: The string to copy into dest.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;
	int i;

	while (dest[l])
		l++;

	for (i = 0; i < l && i < n; i++)
	{
		if (src[i])
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}

	return (dest);
}
