#include "main.h"

/**
 * print_numbers - prints out numbs 0 - 9
 *
 * Return: 0 if complete.
 */

void print_numbers(void)
{
	int n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
