#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of c in s.
 * @c: The character to search for.
 * @s: The string to search for c.
 *
 * Return: A pointer to the first occurrence of c, or NULL.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if(s[i] == c)
			return (*s[i]);
	}

	return (NULL);
}
