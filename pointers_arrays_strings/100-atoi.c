#include "main.h"

/**
 * _atoi - Converts the passed string to an integer.
 * @s: The string to convert.
 */
int _atoi(char *s)
{
	int n = 0;
	int i = 0;

	while (s[i])
	{
		n = n * 10 + (s[i] - '0');
		i++;
	}

	return n;
}
