#include "main.h"

/**
 * _isalpha - check if char is alphabetical.
 * @c: the character
 *
 * Return: 1 if c is alphabetical and 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
