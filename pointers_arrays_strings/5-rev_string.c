#include "main.h"

/**
 * rev_string - reverses the actual string value
 *
 * @s: string value to enter
 *
 */

void rev_string(char *s)
{
	int len = 0;
	int left = 0;
	int temp, right;

	while (s[len] != '\0')
	{
		len++;
	}

	right = len - 1;

	while (left < right)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;
		left++;
		right--;
	}
}
