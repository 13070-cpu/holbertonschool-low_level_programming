#include "main.h"

/**
 * more_numbers - this prints out 0 - 9, 10 times
 *
 */


void more_numbers(void)
{
	int n = 0;
	int a;

	while (n < 10)
	{
		a = 0;
		while (a <= 14)
		{
			if (a > 9)
			{
				_putchar('1');
			}
			_putchar((a % 10) + '0');
			a++;
		}
		_putchar('\n');
		n++;
	}
}
