#include "main.h"

/**
 * _puts - outputs a string
 *
 * @str: string to input
 *
 */

void _puts(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		n++;
		str++;
	}

	_putchar('\n');
}
