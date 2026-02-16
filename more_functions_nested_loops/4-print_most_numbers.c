#include "main.h"

/**
 * print_most_numbers - prints out numbs 0 - 9 except 2 and 4
 *
 */

void print_most_numbers(void)
{
	int n = '0';

	while (n <= '9')
	{
		if (n == '2' || n == '4')
		{
			n++;
			continue;
		}
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
