#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	int l = 0;
	int i;
	int capitalized = 0;

	while (s[l])
		l++;

	for (i = 0; i < l; i++)
	{
		if (
				s[i] == ' ' ||
				s[i] == '	' ||
				s[i] == '\n' ||
				s[i] == ',' || 
				s[i] == ';' ||
				s[i] == '.' ||
				s[i] == '!' ||
				s[i] == '?' ||
				s[i] == '"' ||
				s[i] == '(' ||
				s[i] == ')' ||
				s[i] == '{' ||
				s[i] == '}'
		   )
			capitalized = 0;

		else if (s[i] >= 97 && s[i] <= 122 && capitalized == 0)
		{
			s[i] = s[i] - 32;
			capitalized = 1;
		}
		else if (s[i] >= 65 && s[i] <= 90)
		{
			capitalized = 1;
		}
	}

	return (s);
}
