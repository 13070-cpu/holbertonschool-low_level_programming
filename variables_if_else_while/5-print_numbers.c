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
	int n = 0;

	while (n <= 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
