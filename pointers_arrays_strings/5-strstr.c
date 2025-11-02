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

	while (needle[l])
		l++;

	while (1)
	{
		if (count == l)
		{
			haystack -= count;
			return (haystack);
		}

		if (*haystack == '\0')
			return (NULL);

		if (*haystack != needle[count])
			count = 0;
		else
			count++;

		haystack++;
	}
}
