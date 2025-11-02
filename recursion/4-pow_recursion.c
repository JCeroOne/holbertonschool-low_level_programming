#include "main.h"

/**
 * _pow_recursion - Returns x raised to the power of y.
 * @x: The number.
 * @y: The power to raise x to.
 *
 * Return: x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (_pow_recursion(x, y - 1) * x);
}
