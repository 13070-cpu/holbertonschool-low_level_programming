#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 * Return: The integer value of the string.
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int res = 0;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		/* 1. Handle signs: Every '-' flips the current sign */
		if (s[i] == '-')
		{
			sign *= -1;
		}
		/* 2. Check if the character is a digit */
		if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			/* Build the number: multiply current result by 10 and add new digit */
			res = (res * 10) + (s[i] - '0');
		}
		/* 3. If we already found digits and hit a non-digit, stop immediately */
		else if (found_digit)
		{
			break;
		}
		i++;
	}
	/* Multiply the unsigned result by the final sign and return */
	return (res * sign);
}
