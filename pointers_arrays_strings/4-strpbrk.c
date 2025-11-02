#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches s for the first match of any character in accept.
 * @s: The string to search through.
 * @accept: The characters to search for.
 *
 * Return: A pointer to the first match found.
 */
char *_strpbrk(char *s, char *accept)
{
	int l = 0;
	int i;

	while (accept[l])
		l++;

	while (1)
        {
                for (i = 0; i < l; i++)
		{
			if (accept[i] == *s)
				return (s);
		}

                if (*s == '\0')
                        return (NULL);
                s++;
        }	
}
