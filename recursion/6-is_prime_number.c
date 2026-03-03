#include "main.h"

/**
 * actual_prime_check - checks if a number is prime recursively
 * @n: the number to check
 * @i: the current divisor to test
 *
 * Return: 1 if prime, 0 if not
 */
int actual_prime_check(int n, int i)
{
	/* 1. Base Case: If i*i > n, we've checked everything. It's prime! */
	if (i * i > n)
	{
		return (1);
	}

	/* 2. Base Case: If n is divisible by i, it's NOT prime */
	if (n % i == 0)
	{
		return (0);
	}

	/* 3. Recursive Step: Try the next possible divisor */
	return (actual_prime_check(n, i + 1));
}

/**
 * is_prime_number - identifies if an integer is a prime number
 * @n: the number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	/* Numbers less than 2 are not prime */
	if (n <= 1)
	{
		return (0);
	}

	/* Start checking divisors beginning at 2 */
	return (actual_prime_check(n, 2));
}
