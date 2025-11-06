#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the new string, or NULL if something fails.
 */
char *_strdup(char *str)
{
	unsigned int l = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[l])
		l++;

	char *nstr = malloc((l + 1) * sizeof(char));
	
	if (nstr == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		nstr[i] = str[i];
	}
	nstr[i] = '\0';

	return (nstr);
}
