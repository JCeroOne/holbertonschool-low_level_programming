#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * _isupper - Checks if the provided value is an uppercase character.
 * @c: The character to be checked.
 *
 * Return: 1 if it is an uppercase character, 0 otherwise.
 */
int _isupper(int c)
{
	return (isupper(c) ? 1 : 0);
}
