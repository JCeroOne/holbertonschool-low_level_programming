#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Checks if the provided character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if it is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
	return (isdigit(c) ? 1 : 0);
}
