#include <stdio.h>

/**
 * main - this function prints out
 * all numbers of base 16
 * in a single line
 *
 * Return: 0.
 */

int main(void)
{
	int n = 0;

	while (n < 16)
	{
		if (n < 10)
		{
			putchar(n + '0');
		}
		else
		{
			putchar(n - 10 + 'a');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
