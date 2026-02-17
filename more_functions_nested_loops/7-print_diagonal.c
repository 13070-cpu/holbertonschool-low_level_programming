#include "main.h"

/**
 * print_diagonal - prints out '\' by value of n
 *
 * @n: value to enter
 *
 * Return: 0 if true
 */

void print_diagonal(int n)
{
	int a, x;


	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (x = 0; x < a; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
