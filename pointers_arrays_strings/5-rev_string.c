#include "main.h"

/**
 * rev_string - Reverses the passed string.
 * @s: The string to reverse.
 */
void rev_string(char *s)
{
	int l = 0;
	int i;
	char s2;

	s2 = *s;

	while (s[l])
		l++;

	for (i = 0; i < l; i++)
	{
		s[i] = *s2[l - 1 - i];
	}
}
