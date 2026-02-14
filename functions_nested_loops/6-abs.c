/**
 * _abs - finds the absolute value of an integer
 *
 * @n: is the number to enter
 *
 * Return: n * -1 negative,  n * 0 zero value, n * 1 positive.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}

	else if (n == 0)
	{
		return (n * 0);
	}
	else
	{
		return (n * 1);
	}
}
