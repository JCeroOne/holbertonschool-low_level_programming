#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Changes every lowercase character in a string to uppercase.
 * @s: The string to change.
 *
 * Returns: A pointer to the modified string.
 */
char *string_toupper(char *s)
{
	int l = 0;
	int i;

	while (s[l])
		l++;

	for (i = 0; i < l; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}

	return (s);
}
