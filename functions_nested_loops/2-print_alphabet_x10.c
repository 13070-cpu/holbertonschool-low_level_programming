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

/**
 * print_alphabet_x10 - this function
 * prints out print_alphabet
 * 10 times
 *
 * Return: 0.
 */

int print_alphabet_x10(void)
{
	int n = 0;

	while (n <= 10)
	{
		print_alphabet();
		n++;
	}
	
	return (0);
}
