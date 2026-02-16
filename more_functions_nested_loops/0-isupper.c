#include "main.h"

/**
 * _isupper - checks if uppercase
 *
 * @c: character to enter
 *
 * Return: 1 if true, 0 is false.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
