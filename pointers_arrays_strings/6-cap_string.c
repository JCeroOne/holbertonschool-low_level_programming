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
	bool capitalized = false;

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
			capitalized = false;

		if (s[i] >= 97 && s[i] <= 122 && !capitalized)
		{
			s[i] = s[i] - 32;
			capitalized = true;
		}
	}

	return (s);
}
