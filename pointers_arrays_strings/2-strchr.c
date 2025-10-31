#include "main.h"
#include <stddef.h>

/**
 * _strchr - Returns a pointer to the first occurrence of c in s.
 * @c: The character to search for.
 * @s: The string to search for c.
 *
 * Return: A pointer to the first occurrence of c, or NULL.
 */
char *_strchr(char *s, char c)
{
	while (true)
	{
		if (*s == c)
			return (s);

		else if (*s == '\0')
			return (NULL);
		s++;
	}

	return (NULL);
}
