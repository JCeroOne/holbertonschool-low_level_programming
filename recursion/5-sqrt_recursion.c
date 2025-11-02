#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of the passed number.
 * @n: The number.
 *
 * Return: If n has no natural square root, -1. Otherwise, the square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return recursive_search(1, n);
}

int recursive_search(int base, int target)
{
	if (base * base > target)
		return (-1);
	if (base * base == target)
		return (base);
	return (recursive_search(base + 1, target));
}
