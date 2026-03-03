#include "main.h"

/**
 * factorial - factorials a number
 * @n: is the number
 *
 * Return: factorialed value
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
