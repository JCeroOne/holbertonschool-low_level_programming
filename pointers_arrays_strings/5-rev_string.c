#include "main.h"

/**
 * rev_string - Reverses the passed string.
 * @s: The string to reverse.
 */
void rev_string(char *s)
{
	int l = 0;
	int i;
	char c;

	while (s[l])
		l++;

	for (i = 0; i < l; i++)
	{
		c = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = c;
	}
}
