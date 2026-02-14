#include "main.h"

int print_alphabet(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}

	_putchar('\n');

	return (0);
}	
