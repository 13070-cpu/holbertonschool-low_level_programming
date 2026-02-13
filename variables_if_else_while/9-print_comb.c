#include <stdio.h>

/**
 * main - this function prints
 * out the entire alphabet
 * on a single line
 *
 * Return: 0.
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		/* below is a comma */
		putchar(44);
		/* below is a space */
		putchar(32);
		n++;
	}
	putchar('\n');	
	return (0);
}
