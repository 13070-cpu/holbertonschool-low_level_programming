#include "main.h"

/**
 * print_square - prints out a square
 *
 * @size: is the value to enter to make its size.
 */

void print_square(int size)
{
	int width, height;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (height = 0; height < size; height++)
	{
		for (width = 0; width < size; width++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
