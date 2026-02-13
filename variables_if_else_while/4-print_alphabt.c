#include <stdio.h>

/**
 * main - this function prints
 * out the entire alphabet
 * except for q and e
 * on a single line
 *
 * Return: 0.
 */

int main(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		if (n == 'q')
		{
			n++;
		}
		else if (n == 'e')
		{
			n++;
		}
		else
		{
			putchar(n);
			n++;
		}
	}
	putchar('\n');
	return (0);
}
