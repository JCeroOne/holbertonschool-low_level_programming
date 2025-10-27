#include "main.h"

/**
 * leet - Encodes the passed string in 1337.
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	int i;
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char encoded[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i]; i++)
	{
		int index;

		for (index = 0; index < letters.length; index++)
		{
			if (letters[index] == s[i])
			{
				s[i] = encoded[index / 2];
				break;
			}
		}
	}
	return (s);
}
