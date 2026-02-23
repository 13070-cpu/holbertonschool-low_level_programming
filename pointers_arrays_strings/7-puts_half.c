#include "main.h"

/**
 * puts_half - puts the second half of a string
 *
 * @str: is the string pointer
 */

void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}

	n = len - (len + 1) / 2;

	for (; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
