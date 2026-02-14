#include "main.h"

/**
 * _islower - checks for lowercase letter
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
