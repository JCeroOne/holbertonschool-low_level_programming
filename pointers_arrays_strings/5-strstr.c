#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates needle within haystack.
 * @haystack - The string to search through.
 * @needle - The substring to search for.
 *
 * Return: If found, a pointer to needle. NULL otherwise.
 */
char *_strstr (char *haystack, char *needle)
{
	int l = 0;
	int count = 0;
	int i;

	while (needle[l])
		l++;

	while (1)
	{
		if (*s == '\0')
			return (NULL);

		if (*s != needle[count])
			count = 0;
		else
		{
			count++;
			if (count == l)
			{
				s -= count;
				return (s);
			}
		}
	}	
}
