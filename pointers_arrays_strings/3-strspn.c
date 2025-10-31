#include "main.h"

/**
 * _strspn - Returns the number of bytes in s contained in accept before the first non-match.
 * @s: The string to search through.
 * @accept: The characters to accept.
 *
 * Return: The number of accepted characters in s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int l = 0;
	unsigned int i, j;

	while (accept[l])
		l++;

	for (i = 0; s[i]; i++)
	{
		int found = 0;

		for (j = 0; j < l; j++)
		{
			if (accept[j] == s[i])
			{
				found = 1;
				break;
			}
		}

		if (found == 0)
			return (i);
	}
}
