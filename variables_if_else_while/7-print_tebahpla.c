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
	int n = 'z';

	while (n >= 'a')
	{
		putchar (n);
		n--;
	}
	printf("\n");
	return (0);
}
