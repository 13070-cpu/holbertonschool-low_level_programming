#include <stdio.h>

/**
 * main - this function prints
 * out all base 10 numbers
 * starting from 0
 * on a single line
 *
 * Return: 0.
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
