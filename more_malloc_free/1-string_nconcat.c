#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates s1 and n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes of s2 to concatenate.
 *
 * Return: A pointer to the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ls1 = 0;
	unsigned int ls2 = 0;
	unsigned int limit = n;
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

	if (limit > ls2)
		limit = ls2;
	
	limit += ls1;

	str = malloc((limit + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ls1; i++)
		str[i] = s1[i];

	for (i = ls1; i < limit; i++)
		str[i] = s2[i - ls1];

	return (str);
}
