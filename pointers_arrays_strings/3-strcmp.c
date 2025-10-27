#include "main.h"

/**
 * _strcmp - Compares two strings, and returns which one is greater.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: The difference between the strings.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}

		return (s1[i] - s2[i]);
	}

	return 0;
}
