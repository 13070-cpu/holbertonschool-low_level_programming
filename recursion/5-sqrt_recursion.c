#include "main.h"

/**
 * actual_sqrt_check - checks the natural square root of a number
 * @n: the number to find the square root of
 * @i: the current test number (the "guess")
 *
 * Return: the natural square root, or -1
 */
int actual_sqrt_check(int n, int i)
{
	/* 1. If i*i goes past n, there is no natural square root */
	if (i * i > n)
	{
		return (-1);
	}

	/* 2. If i*i is exactly n, we found it! */
	if (i * i == n)
	{
		return (i);
	}

	/* 3. Otherwise, check the next number (i + 1) */
	return (actual_sqrt_check(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the natural square root, or -1
 */
int _sqrt_recursion(int n)
{
	/* Negative numbers don't have real square roots */
	if (n < 0)
	{
		return (-1);
	}

	/* Start the search at 0 */
	return (actual_sqrt_check(n, 0));
}
