#include "main.h"

/**
 * print_last_digit - Gets the last digit of a number.
 * @n: the number
 *
 * Return: The last digit of n.
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	n = -n;
	_putchar('0' + n);
	return (n);
}
