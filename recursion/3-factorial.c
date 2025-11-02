#include "main.h"

/**
 * factorial - Returns the factorial of a number.
 * @n: The number.
 *
 * Returns: The factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (factorial(n - 1) * n);
}
