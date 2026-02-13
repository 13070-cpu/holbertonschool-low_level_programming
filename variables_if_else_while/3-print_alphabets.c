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
	int n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (n >= 'B')
	{
		n--;
	}
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
