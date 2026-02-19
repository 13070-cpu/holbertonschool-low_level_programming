#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	/* 1. Find the end of the string */
	while (s[i] != '\0')
	{
		i++;
	}

	/* 2. Walk backward from the last character to the first */
	i--; /* Adjust index from length to last character index */
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	/* 3. Finish with a newline */
	_putchar('\n');
}
