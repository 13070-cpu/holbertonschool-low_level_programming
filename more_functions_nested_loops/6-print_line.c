#include "main.h"

/**
 * print_line - prints out '_' by value of n
 *
 * @n: value to enter
 *
 * Return: 0 if true
 */

void print_line(int n)
{
	int a;


	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
