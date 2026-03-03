#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/* 1. Base Case: If we hit the end, stop diving */
	if (*s == '\0')
	{
		return;
	}

	/* 2. The Dive: Call the function for the next character first */
	_print_rev_recursion(s + 1);

	/* 3. The Action: Print character only after the next calls finish */
	_putchar(*s);
}
