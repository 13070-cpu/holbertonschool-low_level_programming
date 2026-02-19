#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: string to enter
 *
 */

void print_rev(char *s)
{
	int n = 0;

	while (s[n])
	{
		n++;
	}

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}

	_putchar('\n');
}
