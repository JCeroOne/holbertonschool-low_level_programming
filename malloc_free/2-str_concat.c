#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the new string, or NULL if something fails.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int ls1 = 0;
	unsigned int ls2 = 0;
	unsigned int i;
	char *str;
	
	if (s1 == NULL)
		ls1 = 0;
	else
	{
		while (s1[ls1])
			ls1++;
	}

	if (s2 == NULL)
		ls2 = 0;
	else
	{
		while (s2[ls2])
			ls2++;
	}

	str = malloc((ls1 + ls2 + 1) * sizeof(char));
	
	if (str == NULL)
		return (NULL);
	
	for (i = 0; i < ls1; i++)
		str[i] = s1[i];

	for (i = ls1; i < ls1 + ls2; i++)
		str[i] = s2[i - ls1];

	str[i] = '\0';

	return (str);
}
