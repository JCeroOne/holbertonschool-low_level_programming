#include "main.h"

/**
 * recursive_search - Checks if target is a prime number recursively.
 * @base: The number to start the search from.
 * @target: The number to check.
 *
 * Return: 1 if target is prime, 0 otherwise.
 */
int recursive_search(int base, int target)
{
	if (target == base)
		return (1);
	if (target % base == 0)
		return (0);
	return (recursive_search(base + 2, target));
}
/**
 * is_prime_number - Checks if n is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (recursive_search(3, n));
}
