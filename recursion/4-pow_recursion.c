#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the base
 * @y: the exponent
 *
 * Return: the result of x^y, or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	/* 1. Error Case: Negative exponents */
	if (y < 0)
	{
		return (-1);
	}

	/* 2. Base Case: x^0 is always 1 */
	if (y == 0)
	{
		return (1);
	}

	/* 3. Recursive Step: x * x^(y-1) */
	return (x * _pow_recursion(x, y - 1));
}
