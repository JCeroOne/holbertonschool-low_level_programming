#include "main.h"

/**
 * _strlen - Returns the length of the passed string.
 * @s: The string to check the length of.
 *
 * Return: The length of the passed string.
 */
int _strlen(char *s)
{
	int l = 0;

	while(s[l]) l++;

	return l;
}
