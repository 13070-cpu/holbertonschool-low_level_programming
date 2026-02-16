#include "main.h"

/**
 * _isdigit - checks if digit between 0 - 9
 *
 * @c: character to enter
 *
 * Return: 1 if true, 0 is false.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
