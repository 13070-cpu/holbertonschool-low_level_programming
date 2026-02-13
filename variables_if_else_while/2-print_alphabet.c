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
		putchar (n);
		n++;
	}
	printf("\n");
	return (0);
}
