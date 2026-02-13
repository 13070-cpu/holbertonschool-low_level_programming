#include <stdio.h>

/**
 * main - this function prints
 * out the entire alphabet
 * on a single line
 *
 * Return: 0.
 */

int main(void)
{
	int n = 'A';

	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	while (n >= 'Z' && n <= 96)
	{
		n++;
	}
	while (n >= 'a' && n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
