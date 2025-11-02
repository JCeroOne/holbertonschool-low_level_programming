#include "main.h"

/**
 * recursive_search - Recursively checks if target is a perfect square.
 * @base: The number to start the search from.
 * @target: The number to check.
 *
 * Return: If target is a perfect square, its root. Otherwise, -1.
 */

int recursive_search(int base, int target)
{
	if (base * base > target)
		return (-1);
	if (base * base == target)
		return (base);
	return (recursive_search(base + 1, target));
}

/**
 * _sqrt_recursion - Returns the natural square root of the passed number.
 * @n: The number.
 *
 * Return: The square root of n, if its an integer. Otherwise, -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (recursive_search(1, n));
}
