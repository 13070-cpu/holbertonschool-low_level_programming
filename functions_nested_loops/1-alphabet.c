#include "main.h"

/**
 * print_alphabet - prints out the entire
 * lowercase alphabet
 * on a single line
 *
 * Return: 0.
 */

int print_alphabet(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}

	_putchar('\n');

	return (0);
}
